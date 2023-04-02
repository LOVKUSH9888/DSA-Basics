#include <iostream>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int largest = arr[0], secondLargest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);
    cout << "Second largest element in the array: " << secondLargest << endl;
    return 0;
}
