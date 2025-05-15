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
}

