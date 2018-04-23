using UnityEngine;
using System.Collections;

public class Rotator : MonoBehaviour {

	int dire;
	void Start() {
		dire = Random.Range (0,2);
		dire = dire*2-1;

	}
	// Update is called once per frame
	void Update () {
		transform.Rotate(new Vector3 (0, 0, dire*45) * Time.deltaTime);
	}
}
