using UnityEngine;
using System.Collections;

public class videoTriggerStart : MonoBehaviour {

	private Collider col;

	void OnTriggerEnter (Collider col) { 

		if (gameObject.GetComponent<videoTrigger> () != null) {
			gameObject.GetComponent<videoTrigger> ().enabled = true;
		}

		if (gameObject.GetComponent<videoTriggerToScene> () != null) {
			gameObject.GetComponent<videoTriggerToScene> ().enabled = true;
		}
	}
}
