using UnityEngine;
using System.Collections;

public class loadLocationInit : MonoBehaviour {

	static public bool toHome;

	static public bool ChapelOut;
	static public bool MBuildingOut;
	static public bool LRoomOut;

	static public bool FellowFWD;
	static public bool BerkeleyBCK;
	static public bool LibrarySqBCK;


	void Start() { 

		toHome = false;
		ChapelOut = false;
		MBuildingOut = false;
		LRoomOut = false;
		FellowFWD = false;
		BerkeleyBCK = false;
		LibrarySqBCK = false;

	}		
}
