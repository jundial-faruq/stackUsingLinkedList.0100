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
        
        //pop operation : remove the topmost element from the elemen
        void pop()
        {
            Node *temp = top;
            if (isEmpty())
            {
                cout << "Stack is empty." << endl;
                return;
            }

            cout << "Popped value : " << temp->data << endl;
            top = temp->next; // update the toppointer to the temp.next
            delete temp;
            
        }

        // Peek/Top operation : Retrieve the value of the topmost
        void peek()
        {
            if (isEmpty())
            {
                cout << "List is Empty." << endl;
            }
            else
            {
                Node *current = top;
                while (current != NULL)
                {
                    cout << current->data << " " << endl;
                    current = current->next;
                }
                cout << endl;
            }// Return the value of the top node
        }

    bool isEmpty()
    {
        return top == NULL; // Return true if the top pointer
    }

};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            stack.push(value); // push the entered value onto
            break;
        case 2:
            stack.pop();
            break;
        
        }
        cout << endl;
    }
    
    return 0;
}