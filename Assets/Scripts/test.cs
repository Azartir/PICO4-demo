using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

public class test : MonoBehaviour
{

    public string count;
    public GameObject point;
    GameObject[] gameObjects;

    void Update()
    {
        gameObjects = GameObject.FindGameObjectsWithTag("Light");
        if (gameObjects.Length > 7)
        {
            for (int i = 0; i < gameObjects.Length; ++i)
            {
                Destroy(gameObjects[i]);
            }
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if(collision.gameObject.tag != "Right Hand" || collision.gameObject.tag != "Left Hand" || collision.gameObject.tag != "Hand trigger")
        {
            StartCoroutine(getRequest("http://192.168.3.17:5000" + "/" + count + "/50"));
        }
        foreach (ContactPoint missileHit in collision.contacts)
        {
            Vector3 hitPoint = missileHit.point;
            Instantiate(point, new Vector3(hitPoint.x, hitPoint.y, hitPoint.z), Quaternion.identity);
        }
    }


    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.tag != "Right Hand" || collision.gameObject.tag != "Left Hand" || collision.gameObject.tag == "Hand trigger")
        {
            StartCoroutine(getRequest("http://192.168.3.17:5000" + "/" + count + "/0"));
        }
        for (int i = 0; i < gameObjects.Length; ++i)
        {
            Destroy(gameObjects[i], 1);
        }
    }

    IEnumerator getRequest(string uri)
    {
        UnityWebRequest uwr = UnityWebRequest.Get(uri);
        yield return uwr.SendWebRequest();

        if (uwr.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error While Sending: " + uwr.error);
        }
        else
        {
            Debug.Log("Received: " + uwr.downloadHandler.text);
        }
    }
}
