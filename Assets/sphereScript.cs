using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;


public class sphereScript : MonoBehaviour {

	[DllImport ("__Internal")]
	private static extern float FooPluginFunction();

	// Use this for initialization
	void Start () {}
	
	// Update is called once per frame
	void Update () {}

	private void OnGUI() {
		if (Input.GetMouseButtonDown (0)) {
			FooPluginFunction();
		} else if (Input.GetMouseButtonUp (0)) {
			loadNewLevel();
		}
	}
	
	public void loadNewLevel() {
		Application.LoadLevel("CubeScene");
	}
}
