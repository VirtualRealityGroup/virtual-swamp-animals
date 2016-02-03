using UnityEngine;
using System.Collections;

public class Timer : MonoBehaviour {

	public float timeElapsed = 0.0f;
	private bool tenSec = false;


     public GameObject[] ZeroMinsVisibleList;
     public GameObject[] TwoMinsVisibleList;
     
     void Update()
     {
         timeElapsed += Time.deltaTime;
         if(timeElapsed > 10.0f && tenSec == false)
         {
         	tenSec = true;

             twoMinutes();
         }
     }
 
 	//For frog
     void twoMinutes() {

         //here's the script you need to create an array of gameobjects with tag: Appear
         if (ZeroMinsVisibleList.Length == 0) {

             ZeroMinsVisibleList = GameObject.FindGameObjectsWithTag("ZeroMins");

         }

         if (TwoMinsVisibleList.Length == 0) {

			TwoMinsVisibleList = GameObject.FindGameObjectsWithTag("TwoMins");
         }

         
         //set each object's Mesh Rendere to enabled that appears in the list

         foreach (GameObject visible in ZeroMinsVisibleList) {
         	 
             visible.SetActive(false);
             
         }

         foreach (GameObject visible in TwoMinsVisibleList) {

             visible.SetActive(true);
             
         }

 }


}
