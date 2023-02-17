// Task = Search for a given key/Value in Array
/// Suppose we have array = {10, 20, 3, 4, 1, 0}
// Key = 20 (which we need to find) - 20 is present at index = 1 Similarly if we need to find the 30 = then == Key == is not present

///Time complexity = Unsorted = n steps && Sorted  = n steps

// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <iostream>
using namespace std;

int search(int arr[], int N, int x)   //Here int x = key & int N = size
{
	for (int i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver's code
int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, N, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}





//Simple Code

#include <iostream>
#include <vector>

using namespace std;

// Linear search function
int linearSearch(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // element found at index i
        }
    }
    return -1; // element not found
}

int main() {
    // Test the linear search function
    vector<int> arr = {5, 2, 4, 6, 1, 3};
    int target = 6;
    int index = linearSearch(arr, target);
    if (index == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << index << endl;
    }
    return 0;
}

