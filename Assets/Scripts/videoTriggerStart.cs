using UnityEngine;
using System.Collections;

public class videoTriggerStart : MonoBehaviour {

	private Collider col;

	private MediaPlayerCtrl mediaScript;

	void Start() {
		mediaScript = gameObject.GetComponent<MediaPlayerCtrl> ();
	}

	void OnTriggerEnter (Collider col) { 

		if (gameObject.GetComponent<videoTrigger> () != null) {
			gameObject.GetComponent<videoTrigger> ().enabled = true;
		}

		if (gameObject.GetComponent<videoTriggerToScene> () != null) {
			gameObject.GetComponent<videoTriggerToScene> ().enabled = true;
		}
	}

	void OnTriggerExit (Collider col) {
		
		if (gameObject.GetComponent<videoTrigger> () != null) {
			gameObject.GetComponent<videoTrigger> ().enabled = false;
		}

		if (gameObject.GetComponent<videoTriggerToScene> () != null) {
			gameObject.GetComponent<videoTriggerToScene> ().enabled = false;
		}
	}

}
