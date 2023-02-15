//Sorting = Either assending order / Decending Order====Generally we use Assending Order
//To make our searching faster
//Time Complexity = O(n^2)
//Space COmplexity = O(1)

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void selectionSort(int a[], int n){  // int n = size of array
    //As we Array are passed by ref.

    for(int i=0; i<n-2; i++){  //here n-2 = Is 2nd last element

        //Finding the smallest element
        int smallest = INT_MAX;

        //Now find the smallet element in the right hand side

        for(int j = i+1; j<n-1; j++) {  //j=i+1 = because we have to compare RHS & n-1 == Last element

        //now loop for finding smallest element
            if(a[j]<smallest) {
                smallest = a[j];
            }
        }

        if(a[i]>smallest){
            swap(a[i], smallest);
        }
    }

}





int main()
{
    int n;

    //Taking input fro the user
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    selectionSort(a, n);  //Here a = array & n = size of array
    

    //for printing the array
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}





///Correct COde

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void selectionSort(int a[], int n){  // int n = size of array
    //As we Array are passed by ref.

    for(int i=0; i<n-1; i++){  //fixed loop condition

        //Finding the smallest element
        int smallest = i; //initialize to the index of the current element

        //Now find the smallest element in the right hand side
        for(int j = i+1; j<n; j++) {  //fixed loop condition
        //now loop for finding smallest element
            if(a[j] < a[smallest]) {
                smallest = j;
            }
        }

        if(i != smallest) { //check if the current element is not the smallest
            swap(a[i], a[smallest]); //swap current element with the smallest element
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    selectionSort(a, n);  //Here a = array & n = size of array

    //for printing the array
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }

    return 0;
}


////Correct code

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // loop through the entire array
        int min_idx = i; // assume the current element is the minimum

        // loop through the rest of the array to find the minimum element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // swap the current element with the minimum element
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
