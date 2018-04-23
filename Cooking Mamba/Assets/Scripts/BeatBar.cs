using UnityEngine;
using System.Collections;

public class BeatBar : MonoBehaviour {

	public GameController main;
	public Transform ing;
	public Transform holder;
	public Pot pot;

	Animator anim;
	AudioSource beat, beat2;
	Transform trans;
	PlayNote pulse;
	float[] bars;
	float timer;
	// Use this for initialization
	void Start () {
		timer = 0;
		trans = GetComponent<Transform> ();
		anim = GetComponent<Animator> ();
		beat =  trans.FindChild("Beat").GetComponent<AudioSource> ();
		beat2 =  trans.FindChild("Beat2").GetComponent<AudioSource> ();
		pulse = trans.FindChild ("Pulse").GetComponent<PlayNote> ();
		bars = new float[4];
		for (int i = 0; i < 4; i++) {
			bars [i] = i * 10 - 15;
		}

	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		float beat4 = 4 / main.bps;
		while (timer > beat4)
			timer -= beat4;
		Vector3 position = trans.position;
		float oldx = position.x;
		position.x = ((timer / beat4) * 40) - 20;
		trans.position = position;

		for (int i = 0; i < 4; i++) {
			if (between (oldx, bars [i], position.x)) {
				if (i == 3) {
					if (!beat2.isPlaying) {
						beat2.Play ();
						pot.collect ();
					}
				} else {
					if (!beat.isPlaying)
						beat.Play ();
				}
			}
		}
			
		if (Input.GetButtonDown("RH_up")) {
			Vector3 pos = trans.position;
			Transform obj = Instantiate(ing, pos, Quaternion.identity) as Transform;
			obj.parent = holder;
			anim.SetTrigger ("doPulse");
			/*int close = Mathf.RoundToInt ((pos.x + 15) / 10);
			if (close==1)
				pulse.playNote(0,2);
			else
				pulse.playNote(0,4);*/
			pulse.playNote(0,new[] {0,4,7,9}[Random.Range(0,4)]);
		}
	}

	bool between(float a, float b, float c){
		return (a < b && b <= c);
	}
}
