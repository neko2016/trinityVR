using UnityEngine;
using System.Collections;

public class loadScene : MonoBehaviour {

	public string newScene;
	
	public void loadNewScene()
	{
		UnityEngine.SceneManagement.SceneManager.LoadScene (newScene);
	}
}
