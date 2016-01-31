using UnityEngine;
using System.Collections;

public class BugMovement : MonoBehaviour {

	public float speed = 5;
	
	public Cardboard cardB;
	public CardboardHead head;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		Quaternion povRot = cardB.HeadPose.Orientation; 
		transform.rotation = Quaternion.Euler(0, povRot.eulerAngles.y, 0);



		var v3 = speed * head.Gaze.direction;
		v3.y = 0.0f;
		transform.position += v3;

	}
}