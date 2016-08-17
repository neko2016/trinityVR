using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class vidMarker : MonoBehaviour {

	private AudioSource myAudio;
	private GameObject[] allAudioNAR;

	public GameObject vidPanel;
	private MediaPlayerCtrl vidPlayer;
	private MeshRenderer vidMesh;

	public float delayVid;

	private bool vidState;

	// Use this for initialization
	void Awake () {

		myAudio = GetComponent<AudioSource> ();
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");

		vidPlayer = vidPanel.GetComponent<MediaPlayerCtrl> ();
		vidMesh = vidPanel.GetComponent<MeshRenderer> ();

		vidState = false;

	}

	// Update is called once per frame
	void Update () {

		if (!myAudio.isPlaying && vidState == true) {
			StartCoroutine (videoOff ());
			vidState = false;

		}

	}


	public void markerPressed(){

		if (!myAudio.isPlaying) {

			foreach (GameObject item in allAudioNAR) {
				StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
			}
			myAudio.Play ();
			StartCoroutine (videoOn ());
			vidState = true;

		} else {

			StartCoroutine(audioFadeOut.FadeOut(myAudio, 0.5f));
			StartCoroutine (videoOff ());
			vidState = false;

		}

	}



	IEnumerator videoOn() {

		yield return new WaitForSeconds (delayVid);

		vidPlayer.Play ();
		vidMesh.enabled = true;

		yield return null;

	}

	IEnumerator videoOff() {

		vidPlayer.Stop ();
		vidMesh.enabled = false;

		yield return null;

	}
}
