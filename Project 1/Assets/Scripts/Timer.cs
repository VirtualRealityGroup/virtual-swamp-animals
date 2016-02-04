using UnityEngine;
using System.Collections;

public class Timer : MonoBehaviour {



    public float timeElapsed = 0.0f;
    private bool rightBefore_twoMinsElapsed = false;
    private bool twoMinsElapsed = false;
    private bool rightBefore_fourMinsElapsed = false;
    private bool FourMinsElapsed = false;
    private bool SixMinsElapsed = false;


     public GameObject[] ZeroMinsVisibleList;
     public GameObject[] TwoMinsVisibleList;
     public GameObject[] FourMinsVisibleList;
     public GameObject[] ZeroMinsVisibleList_Nectar; 
     public GameObject[] ZeroMinsVisibleList_Bugs;
     //public GameObject[] MovementList;
     
     public GameObject main_pivot_control;
     public GameObject cb_main;
     public GameObject low_plane;
     public GameObject high_plane;


     public float twoMinTimeLimit = 10;
     public float fourMinTimeLimit = 20;
     public float sixMinTimeLimit = 30;

     public float frog_speed = 2;
     public float bird_speed = 5;

     public float frog_offset = 4;
     public float bird_offset = 6;

     public float upper_plane_frog_y = -17;
     public float lower_plane_frog_y = -22;

     public float upper_plane_bird_y = 1600;
     public float lower_plane_bird_y = -20;

     public float collider_frog_x = 5;
     public float collider_frog_y = 5;
     public float collider_frog_z = 5;

     public float collider_bird_x = 10;
     public float collider_bird_y = 10;
     public float collider_bird_z = 10;

     public float bird_start_y = 5;

     public AudioSource croak1;
     public AudioClip croak;

    // public AudioSource hawk_attack1;
     public AudioClip hawk_attack;

     void Start(){


     }

     void Update()
     {
         timeElapsed += Time.deltaTime;

         
         if(timeElapsed > (twoMinTimeLimit - 3.40f) && rightBefore_twoMinsElapsed == false)
         {
            rightBefore_twoMinsElapsed = true;

             rightBefore_twoMinutes();
         }

         if(timeElapsed > twoMinTimeLimit && twoMinsElapsed == false)
         {
            twoMinsElapsed = true;

             twoMinutes();
         }

         if(timeElapsed > (fourMinTimeLimit - 2.75f) && rightBefore_fourMinsElapsed == false)
         {
            rightBefore_fourMinsElapsed = true;

             rightBefore_fourMinutes();
         }

         if(timeElapsed > fourMinTimeLimit && FourMinsElapsed == false)
         {
            FourMinsElapsed = true;

             fourMinutes();
         }

         if(timeElapsed > sixMinTimeLimit && SixMinsElapsed == false)
         {
            SixMinsElapsed = true;

             sixMinutes();
         }

     }
 
     void rightBefore_twoMinutes() {
         croak1 = GetComponent<AudioSource>();
          croak1.clip = croak;

            croak1.Play();

            if (ZeroMinsVisibleList_Nectar.Length == 0) {

             ZeroMinsVisibleList_Nectar = GameObject.FindGameObjectsWithTag("ZeroMins");
             
          }

          foreach (GameObject visible in ZeroMinsVisibleList_Nectar) {

             visible.SetActive(false);
             
         }


        //hawk_attack1 = GetComponent<AudioSource>();
       // hawk_attack1.clip = hawk_attack;
            

     }

     void rightBefore_fourMinutes() {
            croak1.clip = hawk_attack;
            croak1.Play();

            if (ZeroMinsVisibleList_Bugs.Length == 0) {

             ZeroMinsVisibleList_Bugs = GameObject.FindGameObjectsWithTag("TwoMins");
             
          }

          foreach (GameObject visible in ZeroMinsVisibleList_Bugs) {

             visible.SetActive(false);
             
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
           // MovementList = GameObject.FindGameObjectsWithTag("Lower_Plane");
        
         }

         
         //set each object's Mesh Rendere to enabled that appears in the list

         foreach (GameObject visible in ZeroMinsVisibleList) {

             visible.SetActive(false);
             
         }

         foreach (GameObject visible in TwoMinsVisibleList) {

             visible.SetActive(true);
             
         }


         low_plane = GameObject.Find("Lower_Plane_Barrier");
         high_plane = GameObject.Find("Upper_Plane_Barrier");

            Vector3 v3 = new Vector3();
            v3.y = lower_plane_frog_y;
            low_plane.transform.position += v3;

            Vector3 v3_b = new Vector3();
            v3_b.y = upper_plane_frog_y;
            high_plane.transform.position += v3_b;
             


         main_pivot_control = GameObject.Find("Main_Pivot");

         BoxCollider collider = main_pivot_control.GetComponent<BoxCollider>();
         collider.size = new Vector3(collider_frog_x, collider_frog_y, collider_frog_z);

         POV_Movement POVmov = main_pivot_control.GetComponent<POV_Movement>();
         POVmov.speed = frog_speed;

         cb_main = GameObject.Find("CardboardMain");

         CameraController camera_control = cb_main.GetComponent<CameraController>();
         camera_control.offsetY = frog_offset;


 }

 //For bird
     void fourMinutes() {

         //here's the script you need to create an array of gameobjects with tag: Appear
         if (TwoMinsVisibleList.Length == 0) {

             TwoMinsVisibleList = GameObject.FindGameObjectsWithTag("TwoMins");
             
         }

         if (FourMinsVisibleList.Length == 0) {

            FourMinsVisibleList = GameObject.FindGameObjectsWithTag("FourMins");
           // MovementList = GameObject.FindGameObjectsWithTag("Lower_Plane");
        
         }

         
         //set each object's Mesh Rendere to enabled that appears in the list

         foreach (GameObject visible in TwoMinsVisibleList) {


             visible.SetActive(false);
             
         }

    


         low_plane = GameObject.Find("Lower_Plane_Barrier");
         high_plane = GameObject.Find("Upper_Plane_Barrier");

            Vector3 v3 = new Vector3();
            v3.y = lower_plane_bird_y;
            low_plane.transform.position += v3;

            Vector3 v3_b = new Vector3();
            v3_b.y = upper_plane_bird_y;
            high_plane.transform.position += v3_b;
             

        foreach (GameObject visible in FourMinsVisibleList) {

             visible.SetActive(true);
             
         }

         main_pivot_control = GameObject.Find("Main_Pivot");

         Vector3 v3_c = new Vector3();
         v3_c.y = bird_start_y;
         main_pivot_control.transform.position += v3_c;

         BoxCollider collider = main_pivot_control.GetComponent<BoxCollider>();
         collider.size = new Vector3(collider_bird_x, collider_bird_y, collider_bird_z);

         POV_Movement POVmov = main_pivot_control.GetComponent<POV_Movement>();
         POVmov.speed = bird_speed;
         POVmov.is_bird = true;

         cb_main = GameObject.Find("CardboardMain");

         CameraController camera_control = cb_main.GetComponent<CameraController>();
         camera_control.offsetY = bird_offset;


 } 

  //For end
     void sixMinutes() {

            print("Game is over");

        }


}
