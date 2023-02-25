//OOPS Goal =  aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. 
//OOP is to bind together the data and the functions


1. CLASS = Main template == BluePrint === user defined dataType
2. Object = Copied version of class == make the copy & filled data == Real World

//Creating a class :

#include <iostream>
using namespace std;

//Syntax of creating a class

class Student {
    int rollNumber;   
    int age;
};

/*Syntax of creating an int dynamically = int*a = new int; */

int main()
{
    //Creating objetct staically
    Student s1;
    Student s2;
    Student s3;


    //Creating objetct Dynamically
    Student * s6 = new Student;
    
    //Accessing properties of elements ==by using .(dot)
    s1.age = 24;
    s1.rollNumber = 100;

    cout<<s1.age<<endl;

    
    return 0;
}
