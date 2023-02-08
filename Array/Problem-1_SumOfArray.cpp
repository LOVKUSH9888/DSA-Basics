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

    //Printing 

    for(int i = 0; i < n; i++){
        cout << a[i]<<"";
    }

    //sum-logic

    int sum = 0;
    int(int i = 0; i < n; i++){
        sum += a[i];
    }

    cout<<sum<<endl;

    return 0;
}




///Ggf


int sumElement(int arr[],int n)
{
    //Your code here
     int sum = 0;
     for(int i =0; i< n ; i++){
        sum = sum+arr[i];   // it can be also = sum+=arr[i];
     }
     
return sum;
}