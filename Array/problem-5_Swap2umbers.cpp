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
