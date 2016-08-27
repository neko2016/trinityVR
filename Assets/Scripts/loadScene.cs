using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class loadScene : MonoBehaviour {

	private Image overlay;

	public GameObject loading;

	public GameObject circle;

	public GameObject logo;

	private float fadeTime;

	public string newScene;

	private GameObject[] allAudioAMB;
	private GameObject[] allAudioSFX;
	private GameObject[] allAudioNAR;
	private GameObject[] allAudioMUS;


	void Start() {
		
		overlay = GameObject.Find ("screenOverlay").GetComponent<Image> ();

		fadeTime = 1f;

		allAudioAMB = GameObject.FindGameObjectsWithTag("AMB");
		allAudioSFX = GameObject.FindGameObjectsWithTag("SFX");
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
		allAudioMUS = GameObject.FindGameObjectsWithTag("MUS");


	}
	
	public void loadNewScene()
	{
		StartCoroutine(LoadingScreen());

		foreach (GameObject item in allAudioAMB) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 2f));
		}

		foreach (GameObject item in allAudioSFX) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 2f));
		}

		foreach (GameObject item in allAudioNAR) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 2f));
		}

		foreach (GameObject item in allAudioMUS) {
			StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 2f));
		}
	}


	private IEnumerator LoadingScreen() {

		loading.SetActive (true);

		Image Screen = loading.GetComponent<Image> ();
		Image Circle = circle.GetComponent<Image> ();
		Image Logo = logo.GetComponent<Image> ();

		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		while (progress < 1.0f) {

			Screen.color = Color.Lerp (Color.clear, Color.black, progress);
			Logo.color = Color.Lerp (Color.clear, Color.white, progress);

			progress += rate * Time.deltaTime;

			yield return null;

		}

		progress = 0;

		while (progress < 1.0f) {

			Circle.fillAmount = Mathf.Lerp (0, 1, progress);

			progress += rate/2 * Time.deltaTime;

			yield return null;
							
		}

		SceneManager.LoadScene (newScene);

	}
		
}
