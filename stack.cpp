#include <iostream>
using namespace std;

// node class representing a single node in the linked list
class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//stack class
class Stack
{
    private:
    Node *top; // pointer to the top node of the stack

    public:
    Stack()
    {
        top = NULL; // initialize the stack with a null top pointer
    }

    //push operation insert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); //Allocate memory for the mew node
        newNode->data = value; // assign value
        newNode->next = top; // set the next pointer of the new node to the current top
        top = newNode; // update the top pointer to the new node
        cout << "push value: " << value << endl;
        return value;
    }

    //IsEmpty operation Check if the stack is empty
    bool isEmpty()
    {
        return top == NULL; // return true if the top pointer is NULL, indicating an empty
    }

    // pop operation : remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "popped value: " << top->data << endl;
        top = top->next
    }

};