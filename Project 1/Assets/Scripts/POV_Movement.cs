using UnityEngine;
using System.Collections;

public class POV_Movement : MonoBehaviour {

	public float speed = 5;
	public float y_axis = 0.0f;
	
	public Cardboard cardB;
	public CardboardHead head;
	
	// Update is called once per frame
	void Update () {

		Quaternion povRot = cardB.HeadPose.Orientation; 
		transform.rotation = Quaternion.Euler(0, povRot.eulerAngles.y, 0);



		var v3 = speed * head.Gaze.direction;
		v3.y = 0.0f;
		transform.position += v3;
		//transform.position.Set(transform.position.x, y_axis, transform.position.z);
	}


}