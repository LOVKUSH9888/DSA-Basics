#include <iostream>
using namespace std;

float findAvg(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum/n;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The average of the elements is: " << findAvg(arr, n) << endl;
    return 0;
}
