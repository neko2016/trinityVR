﻿using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class loadSceneSimple : MonoBehaviour {

	// detects when the camera has collided with the videoSphere and triggers the video to play for the duration and then move to a new sphere
	// attach to videoSphere with box collider (which is a trigger).
	// ensure main camera of GvrMain has a box collider also attached.

	public string newScene;

	private Image overlay;

	private float fadeTime;


	void Awake() {

		overlay = GameObject.Find ("screenOverlay").GetComponent<Image> ();
		fadeTime = 1.5f;

	}

	public void loadNewScene()
	{
		StartCoroutine (FadeToBlack ());
	}

	private IEnumerator FadeToBlack() {

		overlay.gameObject.SetActive (true);
		overlay.enabled = true;
		overlay.color = Color.clear;


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
