using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class splashScreen : MonoBehaviour {

	private Image splash;

	private float fadeTime;


	// Use this for initialization
	void Start () {

		splash = GetComponent<Image> ();

		fadeTime = 1f;

		StartCoroutine (FadeOut (5));

	}

	private IEnumerator FadeOut(int time) {

		yield return new WaitForSeconds(time);

		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		while (progress < 1.0f) {

			splash.color = Color.Lerp (Color.white, new Color(1f, 1f, 1f, 0), progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		Destroy (gameObject);

	}
}


