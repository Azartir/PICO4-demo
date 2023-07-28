using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Breath : MonoBehaviour
{

    public Animator animator;
    public float interval;
    float nullTime = 0f;
    float time = 5f;

    void Update()
    {
        nullTime += Time.deltaTime;
        if (nullTime > time)
        {
            time += interval;
            animator.SetBool("Inhale", (true));
        }
        else animator.SetBool("Inhale", (false));
    }
}
