using UnityEngine;
using System.Collections;

public class cubeScript : MonoBehaviour {
	public MeshRenderer rendererr;
	// Use this for initialization
	void Start () {}
	
	// Update is called once per frame
	void Update () {}

	private void OnGUI() {
		if (Input.GetMouseButtonDown (0)) {
			rendererr.material.color = Color.blue;
		} else 
		if (Input.GetMouseButtonUp (0)) {
			loadNewLevel();
		}
	}

	public void loadNewLevel() {
		Application.LoadLevel("SphereScene");
	}
}
