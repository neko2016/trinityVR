using UnityEngine;
using System.Collections;

public class loadLocationHome : MonoBehaviour {


	void Start() {
		StartCoroutine(Example());
	}

	IEnumerator Example() {
		yield return new WaitForSeconds(1);
		loadLocationInit.toHome = true;
	}
}
