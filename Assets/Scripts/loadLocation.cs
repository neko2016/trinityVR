using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class loadLocation : MonoBehaviour {

	private Vector3 newPos;

	private Scene currScene;

	void Start () {

		Scene currScene = SceneManager.GetActiveScene ();

		// to return always to the entry gallery in Regent House, after it has been visited for the first time
		if (currScene.name == "01entryGallery") {
			if (loadLocationInit.toHome == true) {
				newPos = new Vector3 (200f, 0, 0);
				moveCamera ();
			}
		}

		// to return to outside the chapel, when it has been exited from its interior
		if (currScene.name == "02trinityExterior01") {
			if (loadLocationInit.ChapelOut == true) {
				newPos = new Vector3 (200f, 0, 0);
				loadLocationInit.ChapelOut = false;
				moveCamera ();
			}
		}

		// to return to FS02 from Fellow Sq, when it has been exited from its interior
		if (currScene.name == "02trinityExterior01") {
			if (loadLocationInit.FellowFWD == true) {
				newPos = new Vector3 (200f, 0, 0);
				loadLocationInit.FellowFWD = false;
				moveCamera ();
			}
		}

		if (currScene.name == "02trinityExterior01") {
			if (loadLocationInit.LibrarySqBCK == true) {
				newPos = new Vector3 (200f, 0, 0);
				loadLocationInit.LibrarySqBCK = false;
				moveCamera ();
			}
		}

		// to return to outside the museum building, when it has been exited from its interior
		if (currScene.name == "03trinityExterior02") {
			if (loadLocationInit.MBuildingOut == true) {
				newPos = new Vector3 (400f, 0, 0);
				loadLocationInit.MBuildingOut = false;
				moveCamera ();
			}
		}

		// to return to outside the museum building, when it has been exited from its interior
		if (currScene.name == "03trinityExterior02") {
			if (loadLocationInit.MbexBCK == true) {
				newPos = new Vector3 (200f, 0, 0);
				loadLocationInit.MbexBCK = false;
				moveCamera ();
			}
		}

		// to return to outside the museum building, when it has been exited from its interior
		if (currScene.name == "03trinityExterior02") {
			if (loadLocationInit.BerkeleyBCK == true) {
				newPos = new Vector3 (400f, 0, 0);
				loadLocationInit.BerkeleyBCK = false;
				moveCamera ();
			}
		}

		// to return to outside the old library, when it has been exited from its interior
		if (currScene.name == "04trinityExterior03") {
			if (loadLocationInit.LRoomOut == true) {
				newPos = new Vector3 (200f, 0, 0);
				loadLocationInit.LRoomOut = false;
				moveCamera ();
			}
		}
	}

	void moveCamera() {
		
		GameObject.Find ("Main Camera").transform.position = newPos;
		GameObject.Find ("homepanel").transform.position = newPos;

	}
}
