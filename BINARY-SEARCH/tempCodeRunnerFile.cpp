#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            if (mid == 0 || arr[mid - 1] != x) {
                return mid;
            } else {
                high = mid - 1;
            }
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int index = binarySearch(arr, n, x);
    cout << "Index of first occurrence of " << x << " is: " << index << endl;
    return 0;
}