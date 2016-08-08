using UnityEngine;
using System.Collections;

public class audioMarker : MonoBehaviour {

	public AudioSource myAudio;
	private GameObject[] allOtherAudio;

	// Use this for initialization
	void Start () {
		myAudio = gameObject.GetComponent<AudioSource> (); // retrieves an AudioSource from a GameObject
		allOtherAudio = GameObject.FindGameObjectsWithTag("Audio");
	}

	public void markerTriggered() {
		
		if (!myAudio.isPlaying) {
			
			foreach (GameObject item in allOtherAudio) {
				StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 0.5f));
				//item.GetComponent<AudioSource> ().Stop();
			}
			myAudio.Play ();
		} else {
			StartCoroutine(audioFadeOut.FadeOut(myAudio, 0.5f));
		}
	}
}
