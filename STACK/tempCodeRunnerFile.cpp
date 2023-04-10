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
    /*while (!myStack.empty())
    {                              // Check if the stack is not empty
        int value = myStack.top(); // Get the value of the top element
        myStack.pop();             // Remove the top element
        cout << value << endl;     // Print the value on a new line
    }

    return 0;*/
}