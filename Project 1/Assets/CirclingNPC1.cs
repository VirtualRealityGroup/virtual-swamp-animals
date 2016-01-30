using UnityEngine;
using System.Collections;

public class CirclingNPC1 : MonoBehaviour {

	public float minRotationSpeed = 80.0f;
	public float maxRotationSpeed = 120.0f;
	public float minMovementSpeed = 1.75f;
	public float maxMovementSpeed = 2.25f;
	private float rotationSpeed = 75.0f; // Degrees per second
	private float movementSpeed = 2.0f; // Units per second;
	private Transform target;
	private Quaternion qTo;

	void Start() {
		target = GameObject.Find ("NPCBird1").transform;    
		rotationSpeed = Random.Range (minRotationSpeed, maxRotationSpeed);
		movementSpeed = Random.Range (minMovementSpeed, maxMovementSpeed);
	}

	void Update() {
		Vector3 v3 = target.position - transform.position;
		float angle = 360;
		qTo = Quaternion.AngleAxis (angle, Vector3.forward);
		transform.rotation = Quaternion.RotateTowards (transform.rotation, qTo, rotationSpeed * Time.deltaTime);
		transform.Translate (Vector3.right * movementSpeed * Time.deltaTime);
	}
}