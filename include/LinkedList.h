#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

using namespace std;

template<class T>
class LinkedList
{
    Node<T> *head, *tail;

public:
    LinkedList()
    {
        head = tail = NULL;
    }

    //void Add(Node *newNode);

    void Add(T *data)
    {
        Node<T> *newNode = new Node<T>(data);

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->Next = newNode;
            newNode->Prev = tail;
            tail = newNode;
        }
    }

    void Display()
    {
        Node<T> *current = head;

        while(current != NULL)
        {
            cout << *(current->Data) << endl;
            current = current->Next;
        }
    }

    void Delete(T *data)
    {
        Node<T> *pDelete = Search(data);

        if(pDelete == NULL)
            return;

        if(pDelete == head)
        {
            if(pDelete == tail) // if(head->Next == NULL)
            {
                head = tail = NULL;
            }
            else
            {
                head = head->Next;
                head->Prev = NULL;
            }
        }
        else if(pDelete == tail)
        {
            tail = tail->Prev;
            tail->Next = NULL;
        }
        else
        {
            pDelete->Prev->Next = pDelete->Next; // A->Next = B
            pDelete->Next->Prev = pDelete->Prev; // B->Prev = A
        }

        delete pDelete;
    }

    void InsertAfter(T *afterData, T *newData)
    {
        Node<T> *current;
        Node<T> *newNode = new Node<T>(newData);

        current = Search(afterData);
        if(current == NULL) return;
                    if(current==tail){
                        Add(newData);
                    }
                    else{
                        current->Next->Prev = newNode;
                        newNode->Next =current->Next;
                        current->Next = newNode;
                        newNode->Prev = current;
                        return;
                    }


    }

    void DeleteByIndex(int index)
    {

    }

    void Reverse()
    {

    }

private:
    Node<T>* Search(T *data)
    {
        Node<T> *current = head;

        while(current != NULL)
        {
            if(*(current->Data) == *data)
                return current;

            current = current->Next;
        }

        return NULL;
    }
};

#endif // LINKEDLIST_H