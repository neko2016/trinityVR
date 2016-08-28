using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class loadSceneTimed : MonoBehaviour {


	public string newScene;

	private Image overlay;

	private float fadeTime;

	public float waitTime;


	void Awake() {

		overlay = GameObject.Find ("screenOverlay").GetComponent<Image> ();
		fadeTime = 1.5f;
		StartCoroutine (FadeToBlack ());

	}



	private IEnumerator FadeToBlack() {

		yield return new WaitForSeconds (waitTime);

		overlay.gameObject.SetActive (true);
		overlay.enabled = true;
		overlay.color = Color.clear;


		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		while (progress < 1.0f) {

			overlay.color = Color.Lerp (Color.clear, Color.black, progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		overlay.color = Color.black;
		SceneManager.LoadScene (newScene);
	}
}
