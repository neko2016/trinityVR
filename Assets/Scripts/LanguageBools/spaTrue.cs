using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class spaTrue : MonoBehaviour {

	// Use this for initialization
	void Start () {

		if (languageSelection.langSpa == true) {


			GetComponent<Text> ().enabled = true;

		} else {

			GetComponent<Text> ().enabled = false;

		}

	}

}
