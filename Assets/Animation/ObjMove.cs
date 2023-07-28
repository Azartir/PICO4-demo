using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjMove : MonoBehaviour
{
    public GameObject target;

    void Update()
    {
        transform.position = target.transform.position; 
    }
}
