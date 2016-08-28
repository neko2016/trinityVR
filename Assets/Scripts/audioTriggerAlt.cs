using UnityEngine;
using System.Collections;

public class audioTriggerAlt : MonoBehaviour {

	// detects when the camera has collided with the audio GameObject and triggers the audio to play or stop.
	// attach to sphere with box collider (which is a trigger).
	// ensure main camera of GvrMain has a box collider also attached.

	private GameObject[] allAudioAMB;
	private GameObject[] allAudioSFX;
	private GameObject[] allAudioNAR;
	private GameObject[] allVideo;


	void Start () {
		allAudioAMB = GameObject.FindGameObjectsWithTag("AMB");
		allAudioSFX = GameObject.FindGameObjectsWithTag("SFX");
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
		allVideo = GameObject.FindGameObjectsWithTag("VID");

	}

	void OnTriggerExit (Collider col) { // when the collider is exited...

		foreach (GameObject item in allVideo) {
			StartCoroutine (videoKill.videoStop(item));
		}

		foreach (GameObject item in allAudioAMB) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
		}

		foreach (GameObject item in allAudioSFX) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
		}

		foreach (GameObject item in allAudioNAR) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
		}

	}
		
}
