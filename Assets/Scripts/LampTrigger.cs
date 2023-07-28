using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LampTrigger : MonoBehaviour
{
    public GameObject LampLight;
    int count = 1;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Hand trigger")
        {
            count += 1;
            Debug.Log(count);
            if (count % 2 == 0) LampLight.SetActive(true);
            else LampLight.SetActive(false);
        }
    }

    void Update()
    {
        Debug.Log(count);
    }
}
