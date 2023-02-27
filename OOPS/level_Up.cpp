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

/// Constructures =  special method that is automatically called when an object of a class is created.
// It is used to initialize the data members of new objects == For Garbase Values
// 1. Same name as class name
// 2.No return type
// 3.No input argument

/*class Myclass
{
public:
    Myclass() // Constructor
    {
        cout << "Lovkush";
    }
}*/

// defining the constructor within the class

#include <iostream>
using namespace std;

class student
{
    int rno;
    char name[10];
    double fee;

public:
    student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }

    void display()
    {
        cout << endl
             << rno << "\t" << name << "\t" << fee;
    }
};

int main()
{
    student s; // constructor gets called automatically when
               // we create the object of the class
    s.display();

    return 0;
}

// We get the default when we create the class So no need to create the new constructor

