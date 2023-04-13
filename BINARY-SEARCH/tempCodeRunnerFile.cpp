#include <iostream>
using namespace std;

    int findMin(int arr[], int n)
    {
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] < arr[high])
            {
                high = mid;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }

    int main()
    {
        int arr[] = {5, 6, 1, 2, 3, 4};
        int n = sizeof(arr) / sizeof(arr[0]);
        int index = findMin(arr, n);
        cout << "Index of smallest element is: " << index << endl;
        return 0;
    }
