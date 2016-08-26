using UnityEngine;
using System.Collections;

public class languageAudioClip : MonoBehaviour {

	public AudioClip engClip;
	public AudioClip ireClip;
	public AudioClip chiClip;
	public AudioClip freClip;
	public AudioClip spaClip;

	private AudioSource myAudio;

	void Start () {

		myAudio = GetComponent <AudioSource> ();

		if (languageSelection.langEng == true) {

			myAudio.clip = engClip;

		}

		if (languageSelection.langIre == true) {

			myAudio.clip = ireClip;

		}

		if (languageSelection.langChi == true) {

			myAudio.clip = chiClip;

		}

		if (languageSelection.langFre == true) {

			myAudio.clip = freClip;

		}

		if (languageSelection.langSpa == true) {

			myAudio.clip = spaClip;

		}
	
	}

}
