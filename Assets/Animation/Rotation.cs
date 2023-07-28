using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{

    public Animator animController;
    public string animName;
    public float time;

    private void OnCollisionEnter(Collision collision)
    {
        animController.SetBool("Sit", (false));
        if (collision.gameObject.tag == "Hand trigger")
        {
            animController.SetBool(animName, (true));
            animController.SetBool("End animation", (false));
        }
        StartCoroutine(ExecuteAfterTime(time));
    }

    IEnumerator ExecuteAfterTime(float timeInSec)
    {
        yield return new WaitForSeconds(timeInSec);
        animController.SetBool(animName, (false));
        animController.SetBool("End animation", (true));
    }
}
