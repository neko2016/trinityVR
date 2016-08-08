﻿using UnityEngine;
using System.Collections;

public static class audioFadeOut {

	public static IEnumerator FadeOut (AudioSource audioSource, float FadeTime) {
		float startVolume = audioSource.volume;

		if (audioSource.isPlaying) {

			while (audioSource.volume > 0) {
				audioSource.volume -= startVolume * Time.deltaTime / FadeTime;

				yield return null;
			}

		}

		audioSource.Stop ();
		audioSource.volume = startVolume;
	}


}
