using System;
using System.Runtime.InteropServices;
using System.Threading;
using UnityEngine;

public class AnyClass {}

public class HelloWorld003 : MonoBehaviour {
    private static AnyClass staticAnyClass = new AnyClass();
        void Start () {
            var thread = new Thread(AnotherThread);
            thread.Start();
            thread.Join();
            var anyClassForGCHandle = new AnyClass();
            var gcHandle = GCHandle.Alloc(anyClassForGCHandle);
        }

        private static void AnotherThread() {
            var anyClassLocal = new AnyClass();
        }
}