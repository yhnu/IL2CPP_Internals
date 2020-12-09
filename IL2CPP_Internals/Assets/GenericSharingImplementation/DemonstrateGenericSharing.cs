using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

class GenericType<T>
{
    public T UsesGenericParameter(T value)
    {
        return value;
    }

    public void DoesNotUseGenericParameter() { }

    public U UsesDifferentGenericParameter<U>(U value)
    {
        return value;
    }
}
/*
class AnyClass { }

interface AnswerFinderInterface
{
    int ComputeAnswer();
}

class ExperimentWithInterface : AnswerFinderInterface
{
    public int ComputeAnswer()
    {
        return 42;
    }
}

class InterfaceConstrainedGenericType<T> where T : AnswerFinderInterface
{
    public int FindTheAnswer(T experiment)
    {
        return experiment.ComputeAnswer();
    }
}
*/