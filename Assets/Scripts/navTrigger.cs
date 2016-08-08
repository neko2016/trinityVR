using UnityEngine;
using System.Collections;

public class navTrigger : MonoBehaviour {

	// variables to transform the camera position:
	public float moveXto;
	public float moveYto;
	public float moveZto;

	// vectors for the camera and the home panel
	private Vector3 newPos;

	void Start () {
		newPos = new Vector3(moveXto, moveYto, moveZto);
	}

	// for moving the camera after the video has taken place
	public void MoveCamera() {

		// moves the camera by adding whatever the public values are to its current position
		//GvrViewer.Instance.transform.position = newPos;
		GameObject.Find ("Main Camera").transform.position = newPos;

		//moves the homepanel to follow along with the camera
		GameObject.Find ("homepanel").transform.position = newPos;
	}
}