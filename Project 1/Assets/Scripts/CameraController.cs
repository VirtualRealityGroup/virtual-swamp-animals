using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {
	
	public GameObject player;
	public float offsetX;
	public float offsetY;
	public float offsetZ;

	private Vector3 offset;

	
	// Use this for initialization
	void Start () {
		offset = new Vector3(offsetX, offsetY, offsetZ);
		//offset = transform.position - player.transform.position;
	}
	
	// LateUpdate is called once per frame, guaranteed to run after all items have been processed in update
	void LateUpdate () {
		transform.position = player.transform.position + offset;
	}

	
}
