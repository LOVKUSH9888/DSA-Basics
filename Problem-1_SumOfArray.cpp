#include<iostream>
using namespace std;
int main (){
    cout <<"Enter the number of elements"<<endl;
    int n ; 
    cin << n; 

//taking input

    int a [n] ;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int sum = 0;
    int(int i = 0; i < n; i++){
        sum += a[i];
    }

    cout<<sum<<endl;

    return 0;
}