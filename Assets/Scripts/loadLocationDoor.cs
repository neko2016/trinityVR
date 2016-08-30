using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class loadLocationDoor : MonoBehaviour {

	public void exitDoor() {

		Scene currScene = SceneManager.GetActiveScene ();

		if (currScene.name == "05museumBuilding") {
			loadLocationInit.MBuildingOut = true;
		}

		if (currScene.name == "06longRoom") {
			loadLocationInit.LRoomOut = true;
		}

		if (currScene.name == "07theChapel") {
			loadLocationInit.ChapelOut = true;
		}

		if (currScene.name == "04trinityExterior03") {
			loadLocationInit.BerkeleyBCK = true;
		}

		if (currScene.name == "04trinityExterior03") {
			loadLocationInit.FellowFWD = true;
		}

		if (currScene.name == "03trinityExterior02") {
			loadLocationInit.LibrarySqBCK = true;
		}

		if (currScene.name == "03trinityExterior02MBEX") {
			loadLocationInit.MbexBCK = true;
		}
	}
}
