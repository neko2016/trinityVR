using UnityEngine;
using System.Collections;

public class videoMarker : MonoBehaviour {

	private Transform videoPanel;
	private bool isPlaying; 
	private GameObject[] allAudioNAR;

	// Use this for initialization
	void Start () {
		videoPanel = transform.Find ("videoPanel");
		videoPanel.GetComponent<MeshRenderer> ().enabled = false;
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
		isPlaying = false;
	}

	void Update() {

		if (videoPanel.GetComponent<MediaPlayerCtrl> ().GetCurrentState() == MediaPlayerCtrl.MEDIAPLAYER_STATE.END) {

			isPlaying = false;
			videoPanel.GetComponent<MeshRenderer> ().enabled = false;
			videoPanel.GetComponent<MediaPlayerCtrl> ().Stop ();

		}
	}

	public void markerPressed() {

		if (isPlaying == false) {
			
			videoPanel.GetComponent<MeshRenderer> ().enabled = true;
			videoPanel.GetComponent<MediaPlayerCtrl> ().Play ();
			isPlaying = true;

			foreach (GameObject item in allAudioNAR) {
				StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
			}

		} else {
			
			videoPanel.GetComponent<MeshRenderer> ().enabled = false;
			videoPanel.GetComponent<MediaPlayerCtrl> ().Stop ();
			isPlaying = false;

		}
	}
}
