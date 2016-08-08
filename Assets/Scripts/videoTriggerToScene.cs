using UnityEngine;
using System.Collections;

public class videoTriggerToScene : MonoBehaviour {

	// detects when the camera has collided with the videoSphere and triggers the video to play for the duration and then move to a new sphere
	// attach to videoSphere with box collider (which is a trigger).
	// ensure main camera of GvrMain has a box collider also attached.

	// access video player of Easy Movie Texture
	private MediaPlayerCtrl mediaScript; 
	public string newScene;

	void Start () {
		mediaScript = gameObject.GetComponent<MediaPlayerCtrl> ();
		mediaScript.Play();
	}

	void Update () {
		if (mediaScript.GetCurrentState () == MediaPlayerCtrl.MEDIAPLAYER_STATE.END) {
			ChangeScene ();
		}
	}

	/* void OnTriggerEnter (Collider col) { // when the collider is triggered set the current vectors of the camera and home panel, and play the video
		mediaScript.Play();
	} */

	/* void OnTriggerExit (Collider col) { // when the collider is exited stop the video and reset the trigger
		mediaScript.UnLoad();
	} */

	// for moving the camera after the video has taken place
	public void ChangeScene() {

		UnityEngine.SceneManagement.SceneManager.LoadScene (newScene);

	}
}
