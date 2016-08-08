using UnityEngine;
using System.Collections;

public class homeIcon : MonoBehaviour {

	// controls the behaviour of the foot menu with the home button

	private float camXRot;
	private float newYRot;
	private Vector3 lastRot;
	private float speed = 0.001f; // speed of the slerp between rotation values, smaller is slower and smoother

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update () {

		// Gets the Y rotation of the camera and slerps between its last position and current
		newYRot = GameObject.Find("Main Camera").transform.eulerAngles.y;
		//newYRot = GameObject.Find ("Main Camera").GetComponentInChildren<gvrHeadRot> ().camYRot;
		lastRot = new Vector3(0, transform.eulerAngles.y, 0);
		transform.rotation = Quaternion.Slerp(Quaternion.Euler(lastRot), Quaternion.Euler(0, newYRot, 0) , Time.time * speed);
	}
}
