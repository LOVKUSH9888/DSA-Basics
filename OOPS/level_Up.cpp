/*Revision*/
#include <iostream>
using namespace std;

// Creating a Class

class MyClass
{
public:
    int myNum;
    string myString;
};

int main()
{
    MyClass myObj;

    // Setting the values

    myObj.myNum = 15;
    myObj.myString = "Lovkush";

    // Printing

    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    return 0;
}








