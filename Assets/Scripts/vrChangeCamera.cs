using UnityEngine;
using System.Collections;

public class vrChangeCamera : MonoBehaviour {

	// Use this for initialization
	void Start () {

		if (vrTrueFalse.VRstate == false) {
			GvrViewer.Instance.VRModeEnabled = false;
		}

		else if (vrTrueFalse.VRstate == true) {
			GvrViewer.Instance.VRModeEnabled = true;
		}

	}
	

}
