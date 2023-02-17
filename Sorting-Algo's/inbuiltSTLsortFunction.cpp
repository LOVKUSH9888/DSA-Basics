#include <iostream>
#include<bits/stdc++.h> //Just use this always ---- master header file
#include<algorithm>   //Sort function is stays in this 
using namespace std;


int main()
{
    int n;          //No of elements
    cin>>n;         
    int a[n];       //ENter the array
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    //Simple using sort function from STL

    sort(a, a+n);


    for(int i=0; i<n; i++){
        cout<<a[i]<< " ";
    }
    
    return 0;
}
