using UnityEngine;
using System.Collections;

public class PlayNote : MonoBehaviour {

	new AudioSource audio;
	// Use this for initialization
	void Start () {
		audio = GetComponent<AudioSource> ();
	}
	
	// Update is called once per frame
	public void playNote (float octave, float note) {
		audio.pitch =  Mathf.Pow(2, (float)((octave*12+note-4)/12.0));
		//if (audio.isPlaying)
		//	audio.Stop ();
		audio.Play();
	}
}
