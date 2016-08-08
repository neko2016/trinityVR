using UnityEngine;
using System.Collections;

public class gvrHeadRot : MonoBehaviour {

	// extracts the values of the X and Y rotation values in degrees each frame from the object

	[HideInInspector]
	public float camXRot; 
	[HideInInspector]
	public float camYRot;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		camXRot = transform.eulerAngles.x;
		camYRot = transform.eulerAngles.y;
	}
}
