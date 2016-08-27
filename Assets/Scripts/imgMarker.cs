using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class imgMarker : MonoBehaviour {

	private AudioSource myAudio;
	private GameObject[] allAudioNAR;
	private GameObject[] allVideo;

	public GameObject imagePanel;
	private Image image;

	public float delayImage;
	private float fadeTime;

	private bool imageState;

	// Use this for initialization
	void Awake () {

		myAudio = GetComponent<AudioSource> ();
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
		allVideo = GameObject.FindGameObjectsWithTag("VID");

		image = imagePanel.GetComponent<Image> ();

		fadeTime = 1.5f;
		imageState = false;
	
	}
	
	// Update is called once per frame
	void Update () {

		if (!myAudio.isPlaying && imageState == true) {
			StartCoroutine (FadeOut ());
			imageState = false;

		}

	}


	public void markerPressed(){

		if (!myAudio.isPlaying) {

			foreach (GameObject item in allAudioNAR) {
				StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
			}

			foreach (GameObject item in allVideo) {
				StartCoroutine (videoKill.videoStop(item));
			}

			myAudio.Play ();
			StartCoroutine (FadeIn ());

		} else {

			StartCoroutine(audioFadeOut.FadeOut(myAudio, 0.5f));
			StartCoroutine (FadeOut ());
			imageState = false;

		}

	}



	IEnumerator FadeIn() {

		yield return new WaitForSeconds (delayImage);

		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		while (progress < 1.0f) {

			image.color = Color.Lerp (new Color(1f, 1f, 1f, 0), Color.white, progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		image.color = Color.white;

		imageState = true;

	}

	IEnumerator FadeOut() {
		
		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		while (progress < 1.0f) {

			image.color = Color.Lerp (Color.white, new Color(1f, 1f, 1f, 0), progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		image.color = new Color(1f, 1f, 1f, 0);


	}
		
}
