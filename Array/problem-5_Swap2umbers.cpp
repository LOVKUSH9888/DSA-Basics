#include <iostream>
using namespace std;

int main()
{
    int a, b;

    //Taking input
    cin>>a>>b;


    //Logic

    int temp = a;
    a = b;
    b = temp;


    cout <<"after swapping"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    
    
    return 0;
}



//We can aslo swap these numbers by using BITWISE OPERATOR = XOR


/*This is XOR logic*/
a = a^b;
b = a^b;
a = a^b;



// STL has swap function
swap(a, b);


//Use the STL swap function for small code