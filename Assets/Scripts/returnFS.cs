using UnityEngine;
using System.Collections;

public class returnFS : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
		if (loadLocationInit.FellowFWD == true) {

			GetComponent<AudioSource> ().enabled = true;

		} else {

			GetComponent<AudioSource> ().enabled = false;

		}

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
