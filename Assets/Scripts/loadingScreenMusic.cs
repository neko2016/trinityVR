using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class loadingScreenMusic : MonoBehaviour {

	AudioSource myAudio;

	string myScene;

	bool trigger;


	void Awake () {

		DontDestroyOnLoad (gameObject);

		myAudio = GetComponent<AudioSource> ();

		trigger = false;

	}

	void Update() {

		myScene = SceneManager.GetActiveScene ().name;

		//if (myScene == "00-01languageSelect" || myScene == "00-02vrModeSelect" || myScene == "00-03vrModeSelected" || myScene == "01entryGallery") {

		//	DontDestroyOnLoad (gameObject);

		//}

		if (myScene == "01entryGallery" && trigger == false) {

			trigger = true;
			StartCoroutine (FadeOutLSM (myAudio, 5f));

		}
	}

	public IEnumerator FadeOutLSM (AudioSource audioSource, float FadeTime) {
		
		float startVolume = audioSource.volume;

		if (audioSource.isPlaying) {

			while (audioSource.volume > 0) {
				audioSource.volume -= Time.deltaTime / FadeTime;

				yield return null;
			}

			Destroy (gameObject);

		}


	}
	

}
