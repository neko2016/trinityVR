using UnityEngine;
using System.Collections;

public class audioMarker : MonoBehaviour {

	private AudioSource myAudio;
	private GameObject[] allAudioNAR;

	// Use this for initialization
	void Start () {
		myAudio = gameObject.GetComponent<AudioSource> (); // retrieves an AudioSource from a GameObject
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
	}

	public void markerTriggered() {
		
		if (!myAudio.isPlaying) {
			
			foreach (GameObject item in allAudioNAR) {
				StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
			}

			myAudio.Play ();

		} 

		else {
			
			StartCoroutine(audioFadeOut.FadeOut(myAudio, 0.5f));

		}
	}
}
