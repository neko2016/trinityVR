using UnityEngine;
using System.Collections;
using System.Linq;


public class musicControl : MonoBehaviour {

	private GameObject[] allMus;
	AudioSource currMus;
	int songNumber;

	// Use this for initialization
	void Start () {
	
		songNumber = 0;
		allMus = GameObject.FindGameObjectsWithTag("MUS").OrderBy(go => go.name).ToArray();
		currMus = allMus [songNumber].GetComponent<AudioSource> ();
		currMus.Play ();
		currMus.Pause ();

	}

	public IEnumerator fadeInMusic() {

		currMus.volume = 0;

		float startVolume = currMus.volume;

		currMus.UnPause();

		if (currMus.isPlaying) {

			while (currMus.volume < 1) {
				currMus.volume += /* startVolume */ Time.deltaTime / 1f;

				yield return null;
			}
		}
	}

	public  IEnumerator fadeOutMusic() {
		float startVolume = currMus.volume;

		if (currMus.isPlaying) {

			while (currMus.volume > 0) {
				currMus.volume -= startVolume * Time.deltaTime / 1f;

				yield return null;
			}

		}

		currMus.Pause ();
		currMus.volume = 0;
		//currMus.volume = startVolume;
	}
}
