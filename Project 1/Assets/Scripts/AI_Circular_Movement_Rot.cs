using UnityEngine;
using System.Collections;
public class AI_Circular_Movement_Rot : MonoBehaviour
{

    public float x_start = 0;
    public float z_start = 0;
    public float y_start = 0;
    private float x = 0;
    private float z = 0;

    private float x_original = 0;
    private float z_original = 0;

    public float angle = 0;
    public int radius = 10;
    public float time = 0.002f;
    // Update is called once per frame
    void Update()
    {
        x = x_start;
        z = z_start;

        x_original = (radius * Mathf.Cos(angle));
        z_original = (radius * Mathf.Sin(angle));

        Vector3 direction = new Vector3(x_original, y_start, z_original);
        x = x_start + (radius * Mathf.Cos(angle));
        z = z_start + (radius * Mathf.Sin(angle));
        transform.position = new Vector3(x, y_start, z);
        angle += 15 * Mathf.Rad2Deg * Time.deltaTime * time;
        transform.rotation = Quaternion.LookRotation(-1*direction);
    } 
}