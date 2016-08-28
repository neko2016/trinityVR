using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class textFadeTime : MonoBehaviour {

	private Text text;

	private float fadeTime;


	void Start () {

		text = GetComponent<Text> ();

		fadeTime = 3f;

		StartCoroutine (FadeIn ());

		text.color = new Color (1f, 1f, 1f, 0);

	}

	private IEnumerator FadeIn() {
		
		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		while (progress < 1.0f) {

			text.color = Color.Lerp (new Color(1f, 1f, 1f, 0), Color.white, progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

	
	}

	void OnTriggerEnter (Collider col) {

		StartCoroutine (FadeOut (6));

	}


	private IEnumerator FadeOut(int time) {

		yield return new WaitForSeconds(time);

		float rate = 1.0f / fadeTime;

		float progress = 0.0f;

		while (progress < 1.0f) {

			text.color = Color.Lerp (Color.white, new Color(1f, 1f, 1f, 0), progress);

			progress += rate * Time.deltaTime;

			yield return null;
		}

		Destroy (gameObject);

	}
}


