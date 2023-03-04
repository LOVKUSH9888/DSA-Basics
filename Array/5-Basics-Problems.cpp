//Find the maximum element in an array: Given an array of integers, find the maximum element in the array.
#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maxElement = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxElement = findMax(arr, n);
    cout << "Maximum element in the array: " << maxElement << endl;
    return 0;
}


//2.Reverse an array: Given an array of integers, reverse the order of its elements.
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    reverseArray(arr, n);
    cout << "\nReversed array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


//3.Find the sum of all elements in an array: Given an array of integers, find the sum of all its elements.
#include <iostream>
using namespace std;

int findSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = findSum(arr, n);
    cout << "Sum of elements in the array: " << sum << endl;
    return 0;
}


//4.Find the second largest element in an array: Given an array of integers, find the second largest element in the array.

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
    return 0
}

//5.Remove duplicates from an array: Given an array of integers, remove any duplicates from the array and return the updated array.
#include <iostream>
#include <unordered_set>
using namespace std;

void removeDuplicates(int arr[], int& n) {
    unordered_set<int> s;
    int i = 0;
    while(i < n) {
        if(s.find(arr[i]) == s.end()) {
            s.insert(arr[i]);
            i++;
        } else {
            arr[i] = arr[n - 1];
            n--;
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 7, 5, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    removeDuplicates(arr, n);
    cout << "\nArray after removing duplicates: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
