using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ireTrue : MonoBehaviour {

	// Use this for initialization
	void Start () {

		if (languageSelection.langIre == true) {


			GetComponent<Text> ().enabled = true;

		} else {

			GetComponent<Text> ().enabled = false;

		}

	}

}
