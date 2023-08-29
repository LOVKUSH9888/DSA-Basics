//Sorting of a string:-

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    //DECLARATION OF THE STRING
    string str = "LOVKUSH";

    //SORTING THE STRING
    sort(str.begin(), str.end());

    //FINDING THE LENGTH OF THE STRING 
    cout<<str.length()<<endl;  //Or we can  also use the /*str.size()*/

    cout<<str;
}