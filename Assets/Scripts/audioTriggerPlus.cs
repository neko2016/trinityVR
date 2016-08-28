using UnityEngine;
using System.Collections;

public class audioTriggerPlus : MonoBehaviour {

	private AudioSource myAudio;
	private GvrAudioSource myGvrAudio;


	void Start () {

		myAudio = gameObject.GetComponent<AudioSource> (); 
		myGvrAudio = gameObject.GetComponent<GvrAudioSource>();
	}
		
	void OnTriggerEnter (Collider col) { 

		if (myAudio != null) {
			myAudio.Play ();
		}

		if (myGvrAudio != null) {
			myGvrAudio.Play ();
		}
	}

}
