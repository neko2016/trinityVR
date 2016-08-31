using UnityEngine;
using System.Collections;

public class videoMarker : MonoBehaviour {

	private Transform videoPanel;
	private bool isPlaying; 
	private GameObject[] allAudioNAR;
	private GameObject[] allVideo;


	// Use this for initialization
	void Start () {
		videoPanel = transform.Find ("videoPanel");
		videoPanel.GetComponent<MeshRenderer> ().enabled = false;
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
		allVideo = GameObject.FindGameObjectsWithTag("VID");
		isPlaying = false;
	}

	void Update() {

		if (videoPanel.GetComponent<MediaPlayerCtrl> ().GetCurrentState() == MediaPlayerCtrl.MEDIAPLAYER_STATE.END || videoPanel.GetComponent<MediaPlayerCtrl> ().GetCurrentState() == MediaPlayerCtrl.MEDIAPLAYER_STATE.STOPPED) {

			isPlaying = false;
			videoPanel.GetComponent<MeshRenderer> ().enabled = false;
			videoPanel.GetComponent<MediaPlayerCtrl> ().Stop ();

		}
	}

	public void markerPressed() {

		if (isPlaying == false) {

			foreach (GameObject item in allVideo) {
				StartCoroutine (videoKill.videoStop(item));
			}
			
			videoPanel.GetComponent<MediaPlayerCtrl> ().Play ();
			isPlaying = true;
			videoPanel.GetComponent<MeshRenderer> ().enabled = true;


			foreach (GameObject item in allAudioNAR) {
				StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
			}

		} else {
			
			videoPanel.GetComponent<MeshRenderer> ().enabled = false;
			videoPanel.GetComponent<MediaPlayerCtrl> ().Stop ();
			isPlaying = false;

		}
	}

	public void stopVideo() {

		if (isPlaying == true) {

			videoPanel.GetComponent<MeshRenderer> ().enabled = false;
			videoPanel.GetComponent<MediaPlayerCtrl> ().Stop ();
			isPlaying = false;

		}

	}
}
