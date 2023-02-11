//Suppose we have array = 1,4,5,7 =Reverse= 7,5,4,1 

#include <iostream>
using namespace std;

//Sove by using two pointers
//Start Pointer & End Pointer

int main()
{
    int n;
    cin>>n; // Input the number of elements in the array

    int a[n]; // Declare an array of n elements

    // Loop to input the elements of the array
    for(int i=0; i<n; i++){
        cin>>a[i];   //Before Reverse 
    }

    //Logic for Reversing
    int start = 0;
    int end = n-1;

    while(start<=end){

        swap(a[start], a[end]);
        start++;
        end--;
        
    }


    cout <<"After Reverse"<<endl;

    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
    
    
    return 0;
}
