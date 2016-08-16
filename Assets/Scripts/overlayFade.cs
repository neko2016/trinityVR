using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class overlayFade : MonoBehaviour {

	private Image overlay;

	private float fadeTime;


	// Use this for initialization
	void Awake () {

		fadeTime = 1.5f;

		overlay = GetComponent<Image> ();
		overlay.gameObject.SetActive (true);
		overlay.enabled = true;
		overlay.color = Color.black;

		// Fade to Clear

		StartCoroutine (FadeToClear ());
	}

	private IEnumerator FadeToClear() {

		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		while (progress < 1.0f) {

			overlay.color = Color.Lerp (Color.black, Color.clear, progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		overlay.color = Color.clear;
		overlay.gameObject.SetActive (false);

	}
}
