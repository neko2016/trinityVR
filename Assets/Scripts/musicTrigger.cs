using UnityEngine;
using System.Collections;

public class musicTrigger : MonoBehaviour {

	private musicControl musicControl;

	// Use this for initialization
	void Start () {
		musicControl = GameObject.Find ("audioMusic").GetComponent<musicControl>();
	}
	
	void OnTriggerEnter(Collider Col) {
		StartCoroutine(musicControl.fadeInMusic());
	}

	void OnTriggerExit(Collider Col) {
		StartCoroutine (musicControl.fadeOutMusic ());
	}
}
