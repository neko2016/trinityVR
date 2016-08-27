using UnityEngine;
using System.Collections;

public static class videoKill {

	public static IEnumerator videoStop(GameObject video) {

		MediaPlayerCtrl media = video.GetComponent<MediaPlayerCtrl> ();
		MeshRenderer renderer = video.GetComponent<MeshRenderer> ();

		media.Stop();
		renderer.enabled = false;

		yield return null;

	}
}
