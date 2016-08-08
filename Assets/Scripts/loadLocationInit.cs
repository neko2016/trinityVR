using UnityEngine;
using System.Collections;

public class loadLocationInit : MonoBehaviour {

	static public bool toHome;

	static public bool fromTC;

	static public bool fromMB;

	static public bool fromLR;


	void OnTriggerEnter (Collider col) { 

		toHome = true;
		fromTC = false;
		fromMB = false;
		fromLR = false;

	}		
}
