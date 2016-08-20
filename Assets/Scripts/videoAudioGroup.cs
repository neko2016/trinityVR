using UnityEngine;
using UnityEngine.Audio;
using System.Collections;

public class videoAudioGroup : MonoBehaviour {

	AudioSource audioSource;
	public AudioMixerGroup narration;

	// Update is called once per frame
	void Update () {
	
		if (GetComponent<AudioSource>() == null) {

		} else {

			audioSource = GetComponent<AudioSource> ();

			audioSource.outputAudioMixerGroup = narration;

			// Destroy (this);

		}

	}
}
