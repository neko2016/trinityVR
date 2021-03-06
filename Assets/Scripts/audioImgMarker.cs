﻿using UnityEngine;
using System.Collections;

public class audioImgMarker : MonoBehaviour {

	private Transform imagePanel;
	private AudioSource audioSource;
	private bool isPlaying; 
	private GameObject[] allAudioNAR;


	// Use this for initialization
	void Start () {
		imagePanel = transform.Find ("imagePanel");
		imagePanel.gameObject.SetActive (false);
		audioSource = GetComponent<AudioSource> ();
		allAudioNAR = GameObject.FindGameObjectsWithTag("NAR");
		isPlaying = false;
	}

	public void markerPressed() {

		if (isPlaying == false) {
			imagePanel.gameObject.SetActive (true);

			if (!audioSource.isPlaying) {
				foreach (GameObject item in allAudioNAR) {
					StartCoroutine (audioFadeOut.FadeOut (item.GetComponent<AudioSource> (), 1f));
				}

				audioSource.Play ();
			}

			isPlaying = true;

		} else {
			imagePanel.gameObject.SetActive (false);
			isPlaying = false;
			StartCoroutine(audioFadeOut.FadeOut(audioSource, 0.5f));
		}
	}
}
