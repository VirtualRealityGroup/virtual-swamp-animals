using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {
	
	public GameObject player;
	public float offsetX;
	public float offsetY;
	public float offsetZ;

	private Vector3 offset;

	
	
	// LateUpdate is called once per frame, guaranteed to run after all items have been processed in update
	void LateUpdate () {
		offset = new Vector3(offsetX, offsetY, offsetZ);
		transform.position = player.transform.position + offset;
	}

	
}
