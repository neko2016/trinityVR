using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class engTrue : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
		if (languageSelection.langEng == true) {


			GetComponent<Text> ().enabled = true;

		} else {

			GetComponent<Text> ().enabled = false;

		}

	}

}
