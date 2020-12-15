#ifndef LLQUEUE_H
#define LLQUEUE_H

#include<iostream>
#include "E:\Career\ITI\CDB\Day1-DS-ITI\include\LinkedList.h"
using namespace std;
template <class T>
class LLQueue
{
    LinkedList<T> Q;
    public:
        LLQueue(){}
        void enqueue(T*data){
            Q.Add(data);
        }

        T* dequeue(){
            T*temp = Q.getHead();
            Q.DeleteByIndex(0);
            return temp;
        }

        T*first(){
            return Q.getHead();
        }

        void display(){Q.Display();}

        //virtual ~LLQueue();

    protected:

};

#endif // LLQUEUE_H
