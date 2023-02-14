#include <iostream>
#include<vector>
using namespace std;

int main()
{
    //Creating string statically
    string s = "abc";
    cout<<s<<endl;

    //Creating string dynamically
    string *sp = new string;  //*sp= string Pointer
    *sp = "Lovkush";
    cout<<sp<<endl;  //This will give Address
    cout<<*sp<<endl;  //This will give content


    //Storing the multiple string
    /*use vector string for creating this type of string*/

    vector<string> v;
    v.push_back(s);
    v.push_back("Hello World");
    ///Printing this By iteration = for loop
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }


    return 0;
}
