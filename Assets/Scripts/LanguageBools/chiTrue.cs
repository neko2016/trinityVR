using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class chiTrue : MonoBehaviour {

	// Use this for initialization
	void Start () {

		if (languageSelection.langChi == true) {


			GetComponent<Text> ().enabled = true;

		} else {

			GetComponent<Text> ().enabled = false;

		}

	}

}
