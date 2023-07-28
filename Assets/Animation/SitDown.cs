using UnityEngine;

public class SitDown : MonoBehaviour
{

    public Animator animator;
    int count = 0;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Hand trigger")
        {
            count += 1;
            if (count % 2 == 0 && count > 0)
            {
                animator.SetFloat("SitFloat", -2f);
                animator.SetBool("End animation", (true));
                animator.SetBool("Sit", (false));
            }
            else
            {
                animator.SetFloat("SitFloat", 1f);
                animator.SetBool("End animation", (false));
                animator.SetBool("Sit", (true));
            }
        }
    }
}
