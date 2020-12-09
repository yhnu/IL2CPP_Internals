using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using UnityEngine;

public class PInokeDemo : MonoBehaviour
{
    struct Vector
    {
        public float x;
        public float y;
        public float z;
        

        public Vector(float v1, float v2, float v3) : this()
        {
            this.x = v1;
            this.y = v2;
            this.z = v3;
        }
    };

    struct Boss
    {        
        public string name;
        public int health;

        public Boss(string v1, int v2) : this()
        {
            this.name = v1;
            this.health = v2;
        }
    };


    [DllImport("__Internal")]
    private extern static int Increment(int value);    

    [DllImport("__Internal")]
    [return: MarshalAs(UnmanagedType.U1)]
    private extern static bool StringsMatch([MarshalAs(UnmanagedType.LPStr)]string l, [MarshalAs(UnmanagedType.LPStr)]string r);
    

    [DllImport("__Internal")]
    [return: MarshalAs(UnmanagedType.Bool)]
    private extern static bool IsBossDead(Boss b);

    [DllImport("__Internal")]
    private extern static int SumArrayElements(int[] elements, int size);

    [DllImport("__Internal")]
    private extern static float ComputeLength(Vector v);


    [DllImport("__Internal")]
    private extern static float SumBossHealth(Boss[] b, int len);

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(string.Format("Using a blittable argument: {0}", Increment(42)));
        Debug.Log(string.Format("Marshaling strings: {0}", StringsMatch("Hello", "Goodbye")));

        var vector = new Vector(1.0f, 2.0f, 3.0f);
        Debug.Log(string.Format("Marshaling a blittable struct: {0}", ComputeLength(vector)));
        SetX(ref vector, 42.0f);
        Debug.Log(string.Format("Marshaling a blittable struct by reference: {0}", vector.x));

        Debug.Log(string.Format("Marshaling a non-blittable struct: {0}", IsBossDead(new Boss("Final Boss", 100))));

        int[] values = { 1, 2, 3, 4 };
        Debug.Log(string.Format("Marshaling an array: {0}", SumArrayElements(values, values.Length)));
        Boss[] bosses = { new Boss("First Boss", 25), new Boss("Second Boss", 45) };
        Debug.Log(string.Format("Marshaling an array by reference: {0}", SumBossHealth(bosses, bosses.Length)));
    }

    private void SetX(ref Vector vector, float v)
    {
        vector.x = v;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
