#include <iostream>

#include "E:\Career\ITI\CDB\Day1-DS-ITI\include\LinkedList.h"

using namespace std;

int main()
{
    LinkedList<int> L;

    int a = 3;
    L.Add(&a);
    L.Add(new int(4));
    L.Add(new int(6));
    L.InsertAfter(new int(1),new int(5));
    //L.Add(5);
    //L.Add(7);
    //L.Add(9);

    L.Display();

    //L.InsertAfter(5, 6);
    //L.Delete(3);

    return 0;
}
