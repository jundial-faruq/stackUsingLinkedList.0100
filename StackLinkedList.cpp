#include <iostream>
using namespace std;

class Node
{
public :
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class Stack 
{
    private :
        Node *top;// Pointer to the top node of the stack

    public :
        Stack()
        {
            top = NULL;//Initialize the stackwith a null top
        }
        //push operation insert an element onto the top of the top
        int push(int value)
        {
            Node *newNode = new Node();
            newNode->data = value;
            newNode->next = top;
            top = newNode;
            cout << "Push Value : " << value << endl;
            return value;
        }
};

int main()
{
    return 0;
}