using UnityEngine;
using System.Collections;
using System.Linq;

public class audioUI : MonoBehaviour {

	private GameObject[] allUI;
	private AudioSource click;
	private AudioSource highlight;
	private AudioSource tone;

	// Use this for initialization
	void Start () {
		allUI = GameObject.FindGameObjectsWithTag("UI").OrderBy(go => go.name).ToArray();
		click = allUI [0].GetComponent<AudioSource> ();
		highlight = allUI [1].GetComponent<AudioSource> ();
		tone = allUI [2].GetComponent<AudioSource> ();

	}
	
	public void Enter() {
		highlight.Play ();
		tone.Play ();
	}

	public void Exit() {
		StartCoroutine (audioFadeOut.FadeOut (highlight, 0.5f));
		StartCoroutine (audioFadeOut.FadeOut (tone, 1f));
	}

	public void Click() {
		StartCoroutine (audioFadeOut.FadeOut (highlight, 0.5f));
		StartCoroutine (audioFadeOut.FadeOut (tone, 1f));
		click.Play ();
	}


}
