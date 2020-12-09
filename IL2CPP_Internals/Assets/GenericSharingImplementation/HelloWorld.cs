using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HelloWorld : MonoBehaviour
{
    public void DemonstrateGenericSharing()
    {
        var usesAString = new GenericType<string>();

        //var usesAClass = new GenericType<AnyClass>();
        var usesAValueType = new GenericType<DateTime>();
        //var interfaceConstrainedType = new InterfaceConstrainedGenericType<ExperimentWithInterface>();
    }
}
