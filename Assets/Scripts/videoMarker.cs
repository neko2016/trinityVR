using UnityEngine;
using System.Collections;

public class videoMarker : MonoBehaviour {

	private Transform videoPanel;
	private bool isPlaying; 

	// Use this for initialization
	void Start () {
	
		videoPanel = transform.Find ("videoPanel");
		videoPanel.GetComponent<MeshRenderer> ().enabled = false;
		isPlaying = false;
	}

	public void markerPressed() {

		if (isPlaying == false) {
			videoPanel.GetComponent<MeshRenderer> ().enabled = true;
			videoPanel.GetComponent<MediaPlayerCtrl> ().Play ();
			isPlaying = true;
		} else {
			videoPanel.GetComponent<MeshRenderer> ().enabled = false;
			videoPanel.GetComponent<MediaPlayerCtrl> ().Stop ();
			isPlaying = false;
		}
	}
}
