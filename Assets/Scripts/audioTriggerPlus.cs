using UnityEngine;
using System.Collections;

public class audioTriggerPlus : MonoBehaviour {

	// detects when the camera has collided with the audio GameObject and triggers the audio to play or stop.
	// attach to sphere with box collider (which is a trigger).
	// ensure main camera of GvrMain has a box collider also attached.

	private AudioSource myAudio;
	private GvrAudioSource myGvrAudio;
	private GameObject[] allAudioAMB;
	private GameObject[] allAudioSFX;
	private GameObject[] allAudioNAR;

	void Start () {
		myAudio = gameObject.GetComponent<AudioSource> (); // retrieves an AudioSource from a GameObject
		myGvrAudio = gameObject.GetComponent<GvrAudioSource>();
		allAudioAMB = GameObject.FindGameObjectsWithTag("AMB");
		allAudioSFX = GameObject.FindGameObjectsWithTag("SFX");
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
	}
		
	void OnTriggerEnter (Collider col) { // when the collider is triggered...
		myAudio.Play(); 			     // the audio plays
		myGvrAudio.Play();
	}

	/* void OnTriggerExit (Collider col) { // when the collider is exited...
		
		StartCoroutine(audioFadeOut.FadeOut(myAudio, 3f));

		foreach (GameObject item in allAudioAMB) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
		}

		foreach (GameObject item in allAudioSFX) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
		}

		foreach (GameObject item in allAudioNAR) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
		}

	} */

}
