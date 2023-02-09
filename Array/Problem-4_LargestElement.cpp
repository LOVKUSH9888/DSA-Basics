#include <iostream>
#include <climits> // For INT_MIN constant
using namespace std;

int main()
{
    int n;
    cin>>n; // Input the number of elements in the array

    int a[n]; // Declare an array of n elements

    // Loop to input the elements of the array
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    


    int largest = INT_MIN; // Initialize largest with the smallest integer value possible

    // Loop to find the largest element in the array


    for(int i = 0; i<n; i++){
        if(a[i] > largest){ // If the current element is greater than largest
            largest = a[i]; // Update largest with the current element
        }
    }
    
    cout << largest << endl; // Output the largest element
    
    return 0;
}



//If we need to find the smallest element


int smallest = INT_MAX;

for(int i = 0; i<n; i++){
        if(a[i] <>> largest){ 
            smallest = a[i]; 
        }
    }
    
    cout << smallest<< endl; // Output the smallest element
    
    return 0;
}
