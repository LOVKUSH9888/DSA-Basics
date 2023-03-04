// OOPS Goal =  aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming.
// OOP is to bind together the data and the functions

// 1. CLASS = Main template == BluePrint == = user defined dataType 2. Object = Copied version of class == make the copy & filled data == Real World

// Creating a class :

#include <iostream>
                    // We will #include that class created file here                                                                                                         using namespace std;

// Syntax of creating a class

class Student
{
    //Making rollNumber - Public due to access modifiers
    public :
    
    int rollNumber;

    //Making age - Private due to access modifiers
    int age;
};

/*Syntax of creating an int dynamically = int*a = new int; */

int main()
{
    // Creating objetct staically
    Student s1;
    Student s2;
    Student s3;

    // Creating objetct Dynamically
    Student *s6 = new Student; //* = Derefence variable

    // Accessing properties of elements ==by using .(dot)  == Statically
    s1.age = 24;
    s1.rollNumber = 100;

    cout << s1.age << endl;

    // Acccessing poperties Dynamically
    (*s6).age = 23;
    (s6->rollNumber) = 30;

    // Another way of this
    s6->age = 23;
    s6->rollNumber = 100;

    return 0;
}

/// OOPS has --- Access Modifiers
// 3. Types = PUBLIC, PRIVATE & PROTECTED


//iSOlaTION OF lOGIC - Always try to create a new sub class file seperately



//getter & setter Function
#include<iostream>
using namespace std;
class SomeClass
{
    private:
        int a;     
    public:
        void set(int x)
        {
            a =x;
        }
        int get()
        {
            return a;
        }
};
int main()
{
    SomeClass obj;
    obj.set(10); 
    cout<<obj.get();
    return 0;
}


//o/p: 10
