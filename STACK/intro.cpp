//It is Linear DS
// follows the LIFO (Last In First Out) principle. That is, 
//the element added last will be removed first.
///It is the part of STL

//We can create STACK using -> ARRAY , Linked List , Vector

/*The functions associated with stack are: 
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1) */

//Creating Stack :-)
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack;
    
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout<<"Size of Stack : "<<myStack.size()<<endl;  //Output = 3

    // Popping elements from the stack and printing them
    while(!myStack.empty()){ // Check if the stack is not empty
        int value = myStack.top(); // Get the value of the top element
        myStack.pop(); // Remove the top element
        cout<<value<<endl; // Print the value on a new line
    }
    
    return 0;
}
