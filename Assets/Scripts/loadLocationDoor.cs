using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class loadLocationDoor : MonoBehaviour {

	public void exitDoor() {

		Scene currScene = SceneManager.GetActiveScene ();

		if (currScene.name == "05museumBuilding") {
			loadLocationInit.fromMB = true;
		}

		if (currScene.name == "06longRoom") {
			loadLocationInit.fromLR = true;
		}

		if (currScene.name == "07theChapel") {
			loadLocationInit.fromLR = true;
		}
	}
}
