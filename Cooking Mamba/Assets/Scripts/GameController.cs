using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

	public float bpm;
	public float score;
	public Text scoreboard;
	[HideInInspector] public float bps;

	// Use this for initialization
	void Start () {
		//bpm = 100;
		bps = bpm / 60;
		score = 0;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void incScore(int val) {
		score += val;
		scoreboard.text = score.ToString ();
	}
}
