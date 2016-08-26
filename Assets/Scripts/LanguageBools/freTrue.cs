using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class freTrue : MonoBehaviour {

	// Use this for initialization
	void Start () {

		if (languageSelection.langFre == true) {


			GetComponent<Text> ().enabled = true;

		} else {

			GetComponent<Text> ().enabled = false;

		}

	}

}
