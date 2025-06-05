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
            Node *newNode = new Node();  // 1. Allocate memory
            newNode->data = value; // 2. assign value
            newNode->next = top; // 3. set next point
            top = newNode; // 4. update the top point
            cout << "Push Value : " << value << endl; //
            return value;
        }
    public :
        void pop()
        {
         
        }

};

int main()
{
    return 0;
}