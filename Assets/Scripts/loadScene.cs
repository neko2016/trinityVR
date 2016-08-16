using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class loadScene : MonoBehaviour {

	private Image overlay;

	private float fadeTime;

	public string newScene;

	void Start() {
		
		overlay = GameObject.Find ("screenOverlay").GetComponent<Image> ();
		fadeTime = 1.5f;

	}
	
	public void loadNewScene()
	{
		StartCoroutine (FadeToBlack ());
	}

	private IEnumerator FadeToBlack() {

		overlay.color = Color.clear;
		overlay.gameObject.SetActive (true);
		overlay.enabled = true;

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
