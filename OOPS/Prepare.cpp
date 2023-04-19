// Why oop ?
So before the OOP we have the procedure oriented programming - Which was conventional programming paradigm that uses the high level languages - c, cocol, fortran - Pragram divided into the various tasks - Many functions##Issues : - -Data was globally available so it was be access by the any of the function

                                                                                                                                                                                                                                      // OOP:
                                                                                                                                                                                                                                      -
                                                                                                                                                                                                                                      Our main function is on the DATA not on the function - So we bind the DATA to the function using it - In this the Programs are divided into = DATA + FUNCTION

                                                                                                                                                                                                                                                                                                                                                                                    // #Class :
                                                                                                                                                                                                                                                                                                                                                                                    //// A class is a blueprint for creating objects that encapsulate data and behavior.

                                                                                                                                                                                                                                                                                                                                                                                    class MyClass
{
    // member variables and functions
};

// #Objects:
// An object is an instance of a class, with its own state and behavior.

MyClass myObject;

// #Access Specifiers:
/* Access specifiers are keywords that control the visibility and accessibility of class members.
There are three access specifiers in C++: public, private, and protected. */

class MyClass
{
public:
    // public members
private:
    // private members
protected:
    // protected members
};

/// #Constructor:
A constructor is a special member function that initializes the object's state when it is created.

    ///#destructor:
    /*A destructor is a special member function that cleans up the object's resources when it is destroyed.*/

    class MyClass
{
public:
    MyClass();  // constructor declaration
    ~MyClass(); // destructor declaration
};

MyClass::MyClass()
{
    // constructor definition
}

MyClass::~MyClass()
{
    // destructor definition
}


//#Member Functions:
Member functions are functions that are defined inside a class and operate on its member variables.
They can be either public, private, or protected.

class MyClass {
  public:
    void myFunction(); // member function declaration
};

void MyClass::myFunction() {
  // member function definition
}


//#Inheritance:
/*Inheritance is a mechanism that allows a new class to be based on an existing class.
The new class inherits the properties of the existing class, and can override or extend its behavior.*/

class MyBaseClass {
  // base class members
};

class MyDerivedClass : public MyBaseClass {
  // derived class members
};


//#Polymorphism : 
/*Polymorphism is the ability of objects to take on many forms.
It is achieved through virtual functions and function overloading.*/

class MyBaseClass {
  public:
    virtual void myFunction(); // virtual function declaration
};

class MyDerivedClass : public MyBaseClass {
  public:
    void myFunction(); // override the virtual function
};


//# function overloading:
class MyClass {
  public:
    void myFunction(int arg1); // function declaration
    void myFunction(int arg1, int arg2); // function overloading
};

void MyClass::myFunction(int arg1) {
  // function definition
}

void MyClass::myFunction(int arg1, int arg2) {
  // function definition
}

