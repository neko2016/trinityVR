using UnityEngine;
using System.Collections;

public class soundFieldTrigger : MonoBehaviour {

	private GvrAudioSoundfield myGvrSoundfield; 

	// Use this for initialization
	void Start () {
		myGvrSoundfield = gameObject.GetComponent<GvrAudioSoundfield> ();

	}

	void OnTriggerEnter (Collider col) {
		myGvrSoundfield.Play ();

	}

	void OnTriggerExit(Collider col) {
		myGvrSoundfield.Stop ();
	}
}
