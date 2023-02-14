#include <iostream>
#include<vector>
#include<algorithm>
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
        ///We can also sort this string by:
        sort(v.begin(), v.end());
        cout<<v[i]<<endl;
    }


    //Another way === by taking input from the user
    string s3;
    /*cin>>s3;*/   //dont use this 
    getline(cin, s3);  //This will also consider the spaces in between them //This is the method in string for taking input -Here cin.getline doesnt work
    cout<<s3<<endl;


    ///We can aslo cange the string by:
    s3 = "abcabc"
    cout<<s3[1]<<endl;



    //Adding of two string
    string s4 = s + s3;

    ///also we can add the string
     string s4 = s + s3 + "lovkush Yadav";
    cout<<s4<<endl;

    return 0;
}
