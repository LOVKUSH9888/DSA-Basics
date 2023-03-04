//1.Find two numbers in an array that add up to a given sum:
#include <iostream>
#include <algorithm>
using namespace std;

void findNumbers(int arr[], int n, int sum) {
    sort(arr, arr+n); // sort the array
    int left = 0, right = n-1;
    while(left < right) {
        if(arr[left] + arr[right] == sum) {
            cout << "Pair found: " << arr[left] << " and " << arr[right] << endl;
            return;
        }
        else if(arr[left] + arr[right] < sum) {
            left++;
        }
        else {
            right--;
        }
    }
    cout << "Pair not found" << endl;
}

int main() {
    int arr[] = { 8, 3, 5, 2, 9, 1, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    findNumbers(arr, n, sum);
    return 0;
}


//2.Remove duplicates from a sorted array using two pointers:
#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    int j = 0;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] != arr[i+1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n-1];
    return j;
}

int main() {
    int arr[] = { 1, 2, 2, 3, 4, 4, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    n = removeDuplicates(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}


//3.Reverse an array using two pointers:
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int left = 0, right = n-1;
    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//4.Move zeroes to the end of an array using two pointers:
#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int i = 0, j = 0;
    while (i < n && j < n) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else {
            i++;
        }
    }
}

int main() {
    int arr[] = { 0, 1, 0, 3, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZeroes(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

//.
