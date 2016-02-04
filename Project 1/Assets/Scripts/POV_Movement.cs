using UnityEngine;
using UnityEngine.UI;
using System.Collections;


public class POV_Movement : MonoBehaviour {

	public float speed = 5;
	public float y_axis = 0.0f;
	
	public Cardboard cardB;
	public CardboardHead head;

	public Text countText;
	public Text winText;
    public AudioClip crunch1;
        AudioSource crunchA;

	private int count;

	public bool is_bird = false;

	public GameObject bird_char; 
 	



	void Start () 
	{

		crunchA = GetComponent<AudioSource>();
        crunchA.clip = crunch1;
 
		count = 0;
		//SetCountText();
		winText.text = "";
	}

	// Update is called once per frame
	void Update () {


		if (is_bird == true) {
			Quaternion povRot = cardB.HeadPose.Orientation; 
			transform.rotation = Quaternion.Euler(0, povRot.eulerAngles.y, 0);



			var v3 = speed * head.Gaze.direction;
			//v3.y = 0.0f;
			transform.position += v3;

		}
		else {

			Quaternion povRot = cardB.HeadPose.Orientation; 
			transform.rotation = Quaternion.Euler(0, povRot.eulerAngles.y, 0);


			var v3 = speed * head.Gaze.direction;
			v3.y = 0.0f;
			transform.position += v3;
			//transform.position.Set(transform.position.x, y_axis, transform.position.z);
		}
	}

	void OnTriggerEnter(Collider other) 
	{
		if (other.gameObject.CompareTag ("Edible")) 
		{
			other.gameObject.SetActive (false);
			count = count + 1;
			//SetCountText();

			crunchA.Play();

		}

		// (won't use this) Destroy(other.gameObject);
		// if (other.gameObject.CompareTag("Player"))
		// gameObject.SetActive(false);

	}

	void SetCountText() 
	{
		countText.text = "Count: " + count.ToString ();
		if (count >= 13)
		{
			winText.text = "You Win!";
		}
	}


}