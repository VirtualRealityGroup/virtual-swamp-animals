using UnityEngine;
using System.Collections;
public class AI_Circular_Movement : MonoBehaviour
{

    public float x_start = 0;
    public float z_start = 0;
    public float y_start = 0;
    private float x = 0;
    private float z = 0;

    public float angle = 0;
    public int radius = 10;
    public float time = 0.002f;
    // Update is called once per frame
    void Update()
    {
        x = x_start;
        z = z_start;
        Vector3 direction = new Vector3(x, y_start, z);
        x = x_start + (radius * Mathf.Cos(angle));
        z = z_start + (radius * Mathf.Sin(angle));
        transform.position = new Vector3(x, y_start, z);
        angle += 15 * Mathf.Rad2Deg * Time.deltaTime * time;
       // transform.rotation = Quaternion.LookRotation(-1*transform.position);
    }
}