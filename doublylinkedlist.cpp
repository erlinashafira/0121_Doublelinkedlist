#include <iostream>
#include <string>
using namespace std;

class node
{
public:
    int noMhs;
    node *next;
    node *prev;   
};

class DoubleLinkedList
{
private:
    node *START;
public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "uEnter the roll member of the student : ";
        cin >> nim;
    }

public:
    {
        //step 2
        newNode->noMhs = nim;

        //step 3
    if(START NULL || nim << START->noMhs)
    {
        cout << "uDuplicate member not allowed" << endl;
        return;
    } 
        //step 4  : newNode.next = START
        newNode->next = START;

        //step 5 : START prev = newNode (if START axists)
        if (START != NULL)
            START->prev = newNode;
    }

}

