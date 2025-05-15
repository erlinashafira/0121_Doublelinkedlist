#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;   

};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout<< "\nEnter the roll member of the student : ";
        cin>> nim;

        //step 1 = allocate memory for new node
        Node *newNode= new Node();
    
        //step 2 = assign value to the data fields
        newNode->noMhs = nim;

        //step 3
    if(START == NULL || nim <= START->noMhs)
    {
        if(START != NULL && nim == START->noMhs)
        {
        cout << "\nDuplicate member not allowed" << endl;
        return;

        //step 4  : newNode.next = START
        newNode->next = START;

        //step 5 : START prev = newNode (if START axists)
        if (START != NULL)
            START->prev = newNode;

        //step 6 : newode prev = NULL
        newNode->prev = NULL;

        //step 7 : START = newNode
        START = newNode;
        return;
        }
    

    }
    //insert in between node
    //step 8 : locate positionfor insertion
    Node *current = START;
    while (current->next != NULL && current->next->noMhs < nim)
    {
        current = current->next;
    }

    if (current->next != NULL && nim == current->next->noMhs)
    {
        cout << "\nDuplicate roll numbers not allowed" << endl;
        return;
    }

    //step 9 :  Insert between current and urrent->next
    newNode->next = current->next; //step 9a: newNode.next = current
    newNode->prev = current; //step 9b: newNode.prev = current

    //insert last node
    if(current->next != NULL)
    current->next->prev = newNode; //step 9c: current.next.prev = newNode
    current->next = newNode; //step 9d: current next = newNode
    
}


    void hapus()
    {
        if(START ==NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        cout << "\nEnter the roll member of the student whose record is to be deleted";
        int rollNo;
        cin >> rollNo;

        Node *current = START;

        //step 1: Transverse the list to find the node
        while(current != NULL && current->noMhs != rollNo)
        {
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "Record not found" << endl;
            return;
        }

        //step 2: if node is at beginning
        if (current == START)
        {
            START = current->next; //step 2a: START = START.next
            if (START != NULL)
            {
                START->prev = NULL; //step 2b: START.prev = NULL
            }
        }
    else
    { 
        //step 3: link previous node to next of current
        current->prev->next = current->next;

        //step 4: if current is not the last node
        if (current->next != NULL)
            current->next->prev;

        //step 5: delete the node
        delete current;
        cout << "Record with roll member" << rollNo << "deleted" <<endl;

    }
}
};



