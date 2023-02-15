//This loop works by comparing adjacent


#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // loop through the entire array
        bool swapped = false; // keep track of whether any swaps were made

        // loop through the unsorted portion of the array
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) { // if adjacent elements are out of order
                swap(arr[j], arr[j+1]); // swap them
                swapped = true; // mark that a swap was made
            }
        }

        // if no swaps were made in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
