using UnityEngine;
using System.Collections;
using System.Linq;

// This script plays takes all MUS tags from the scene into a list. The first song on the list plays. 
// Activating ChangeSong() cycles the playback to the next song. If the list is exhausted it returns to the first song. 

public class chapelMusic : MonoBehaviour {

	private GameObject[] allMus;
	AudioSource currMus;
	int songNumber;

	void Start () {

		songNumber = 0;
		allMus = GameObject.FindGameObjectsWithTag("MUS").OrderBy(go => go.name).ToArray();
		currMus = allMus [songNumber].GetComponent<AudioSource> ();
		currMus.Play();
	
	}
	
	public void ChangeSong() {
		StartCoroutine (audioFadeOut.FadeOut (currMus, 0.5f));
		if (songNumber == (allMus.Length - 1)) {
			songNumber = 0;
		} else {
			songNumber++;
		}
		currMus = allMus [songNumber].GetComponent<AudioSource> ();
		currMus.Play();
	}
}
