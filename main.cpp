#include <iostream>

#include "E:\Career\ITI\CDB\Day1-DS-ITI\include\LinkedList.h"
#include "LLStack.h"
#include "llqueue.h"

using namespace std;

int main()
{
    /*LinkedList<int> L;

    int a = 3;
    L.Add(&a);
    L.Add(new int(4));
    L.Add(new int(6));
    //L.InsertAfter(new int(1),new int(5));
    //L.DeleteByIndex(0);
    L.Reverse();
    L.Display();*/

    /*
    LLStack<int> Stk;
    Stk.push(new int(1));
    Stk.push(new int(2));
    Stk.push(new int(3));
    cout << *Stk.pop() << endl << endl;
    cout << *Stk.last() << endl << endl;
    Stk.display();*/
    LLQueue<int> Q;
    Q.enqueue(new int(1));
    Q.enqueue(new int(2));
    Q.enqueue(new int(3));
    cout << *Q.dequeue() << endl << endl;
    cout << *Q.first() << endl << endl;

    Q.display();




    return 0;
}
