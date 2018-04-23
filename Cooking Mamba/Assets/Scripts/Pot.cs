using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Pot : MonoBehaviour {

	public Transform ings;
	public int[] tolerance;
	public Text text;
	public GameController main;

	List<Transform> toCollect;
	List<Transform> toDrop;
	Transform trans;

	float score;
	// Use this for initialization
	void Start () {
		trans = GetComponent<Transform> ();
		toCollect = new List<Transform>();
		toDrop = new List<Transform>();
	}
	
	// Update is called once per frame
	void Update () {
		Transform item;
		int index=0;
		while (index < toCollect.Count) {
			item = toCollect [index];
			Vector3 dist = (trans.position + new Vector3(0,3,0)) - item.position;
			if (dist.magnitude < 2) {
				toCollect.Remove (item);
				Destroy (item.gameObject);
				continue;
			}
			dist.Normalize ();
			item.position += dist;
			index += 1;
		}

		index=0;
		while (index < toDrop.Count) {
			item = toDrop [index];
			if (item.position.y < -20) {
				toDrop.Remove (item);
				Destroy (item.gameObject);
				continue;
			}
			item.position -= new Vector3(0,Mathf.Abs(item.position.y)/10,0);
			index += 1;
		}


	}

	public void collect () {
		score = 100;
		Transform[] closest = new Transform[3];
		for (int i = 0; i < ings.childCount; i++) {
			Transform child = ings.GetChild (i);
			int index = Mathf.RoundToInt((child.position.x + 15) / 10);
			if (index == 3) {
				toDrop.Add (child);
				score -= 10;
				continue;
			}
			if (closest [index]) {
				if (toBar(child,index) < toBar(closest [index],index)) {
					toDrop.Add (closest [index]);
					closest [index] = child;
				} else {
					toDrop.Add (child);
				}
				score -= 10;
			} else {
				closest [index] = child;
			}
		}
		for (int i = 0; i < 3; i++) {
			if (closest [i]) {
				toCollect.Add (closest [i]);
				score -= toBar (closest [i], i)*2;
			} else {
				score -= 10;
			}
		}
		//print (score);
		if (score > tolerance[0]){
			text.text = "Delicious!";
			main.incScore (100);
		} else if (score > tolerance[1]){
			text.text = "Tasty";
			main.incScore (70);
		} else if (score > tolerance[2]) {
			text.text = "OK";
			main.incScore (30);
		} else {
			text.text = "Disgusting";
		}
	}
	
	float toBar(Transform note, int index){
		return Mathf.Abs (note.position.x - (index * 10 - 15));
	}
}
