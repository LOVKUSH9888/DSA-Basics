// It is Linear DS
//  follows the LIFO (Last In First Out) principle. That is,
// the element added last will be removed first.
/// It is the part of STL

// We can create STACK using -> ARRAY , Linked List , Vector

/*The functions associated with stack are:
empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) */

// Creating Stack :-) Its STL inbuilt stack
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Size of Stack : " << myStack.size() << endl; // Output = 3

    // Popping elements from the stack and printing them
    while (!myStack.empty())
    {                              // Check if the stack is not empty
        int value = myStack.top(); // Get the value of the top element
        myStack.pop();             // Remove the top element
        cout << value << endl;     // Print the value on a new line
    }

    return 0;
}

// STACK Implimentation using Array:-

#include <iostream>
using namespace std;

class Stack
{
    int *arr;      // Allowing Dynamic array as we are not giving size here
    int nextIndex; // This will give the Index where I want to insert element

public:
    Stack()
    {                     // This is the  Default - constructor
        arr = new int[4]; // Dynamically allocate memory for array of size 4
        nextIndex = 0;    // Initialize nextIndex to 0
    }

    Stack(int cap)
    {                       // This is Parameterize constructor --cap = capacity
        arr = new int[cap]; // Dynamically allocate memory for array of size cap
        nextIndex = 0;      // Initialize nextIndex to 0
    }

    /// return no of elements present in stack
    int size()
    {
        return nextIndex; // Return the value of nextIndex as the size of stack
    }
    bool isEmpty()
    {
        /*if(nextIndex==0){
           return true;
        }else{
           return false;
        }*/
        return nextIndex == 0; // Return true if nextIndex is 0, false otherwise
    }
};

int main()
{

    return 0;
}
