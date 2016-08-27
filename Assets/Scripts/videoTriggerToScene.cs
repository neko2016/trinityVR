using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class videoTriggerToScene : MonoBehaviour {

	// detects when the camera has collided with the videoSphere and triggers the video to play for the duration and then move to a new sphere
	// attach to videoSphere with box collider (which is a trigger).
	// ensure main camera of GvrMain has a box collider also attached.

	// access video player of Easy Movie Texture
	private MediaPlayerCtrl mediaScript; 

	public string newScene;

	private Image overlay;

	private float fadeTime;

	private musicControl musicControl;

	public GameObject loading;

	public GameObject circle;

	public GameObject logo;

	private GameObject[] allAudioAMB;
	private GameObject[] allAudioSFX;
	private GameObject[] allAudioNAR;
	private GameObject[] allAudioMUS;



	void Awake() {

		if(GameObject.Find("audioMusic")) {

		musicControl = GameObject.Find ("audioMusic").GetComponent<musicControl>();

		}
		overlay = GameObject.Find ("screenOverlay").GetComponent<Image> ();
		fadeTime = 1.5f;

	}


	void Start () {

		allAudioAMB = GameObject.FindGameObjectsWithTag("AMB");
		allAudioSFX = GameObject.FindGameObjectsWithTag("SFX");
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
		allAudioMUS = GameObject.FindGameObjectsWithTag("MUS");

		mediaScript = gameObject.GetComponent<MediaPlayerCtrl> ();
		mediaScript.Play();

	}

	void Update () {
		if (mediaScript.GetCurrentState () == MediaPlayerCtrl.MEDIAPLAYER_STATE.END || Input.GetMouseButtonDown(0)) {

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

			StartCoroutine (LoadingScreen ());
			StartCoroutine (musicControl.fadeOutMusic ());
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
