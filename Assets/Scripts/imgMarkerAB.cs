using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class imgMarkerAB : MonoBehaviour {

	private AudioSource myAudio;
	private GameObject[] allAudioNAR;

	public GameObject imagePanel1;
	public GameObject imagePanel2;
	public GameObject imagePanel3;
	private Image image1;
	private Image image2;
	private Image image3;

	public float delayImage;
	private float fadeTime;

	private bool imageState;

	// Use this for initialization
	void Awake () {

		myAudio = GetComponent<AudioSource> ();
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");

		image1 = imagePanel1.GetComponent<Image> ();
		image2 = imagePanel2.GetComponent<Image> ();
		image3 = imagePanel3.GetComponent<Image> ();


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

		// IMAGE ONE 

		while (progress < 1.0f) {

			image1.color = Color.Lerp (new Color(1f, 1f, 1f, 0), Color.white, progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		image1.color = Color.white;

		// IMAGE 2

		yield return new WaitForSeconds (0.4f);

		progress = 0;

		while (progress < 1.0f) {

			image2.color = Color.Lerp (new Color(1f, 1f, 1f, 0), Color.white, progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		image2.color = Color.white;

		// IMAGE 3

		yield return new WaitForSeconds (0.4f);

		progress = 0;

		while (progress < 1.0f) {

			image3.color = Color.Lerp (new Color(1f, 1f, 1f, 0), Color.white, progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		image3.color = Color.white;

		// END

		imageState = true;

	}

	IEnumerator FadeOut() {

		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		// IMAGE THREE

		while (progress < 1.0f) {

			image3.color = Color.Lerp (Color.white, new Color(1f, 1f, 1f, 0), progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		image3.color = new Color(1f, 1f, 1f, 0);

		// IMAGE 2

		yield return new WaitForSeconds (0.4f);
		progress = 0;

		while (progress < 1.0f) {

			image2.color = Color.Lerp (Color.white, new Color(1f, 1f, 1f, 0), progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		image2.color = new Color(1f, 1f, 1f, 0);

		// IMAGE ONE

		yield return new WaitForSeconds (0.4f);
		progress = 0;

		while (progress < 1.0f) {

			image1.color = Color.Lerp (Color.white, new Color(1f, 1f, 1f, 0), progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}	

		image1.color = new Color(1f, 1f, 1f, 0);

	}

}
