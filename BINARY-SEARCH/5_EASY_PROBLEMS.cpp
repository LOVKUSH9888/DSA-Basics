// Problem 1: Given a sorted array of integers, find the index of a particular element in the array.

Example : Input : arr[] = {1, 3, 5, 7, 9} x = 5

                  Output : 2

#include <iostream>
                  using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int index = binarySearch(arr, n, x);
    cout << "Index of " << x << " is: " << index << endl;
    return 0;
}

/// Problem 2: Given a sorted array of integers, find the index of the first occurrence of a particular element in the array.

Example : Input : arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5} x = 3

                  Output : 3

#include <iostream>
                  using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            if (mid == 0 || arr[mid - 1] != x)
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int index = binarySearch(arr, n, x);
    cout << "Index of first occurrence of " << x << " is: " << index << endl;
    return 0;
}

/// Problem 3: Given a sorted array of integers, find the index of the last occurrence of a particular element in the array.

Example : Input : arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 5} x = 3

                  Output : 5

#include <iostream>
                  using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            if (mid == n - 1 || arr[mid + 1] != x)
            {
                return mid;
            }
            else
            {
                low = mid + 1
            }
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

// Problem 4: Given a sorted array of integers, find the index of the smallest element in the rotated array. The array has been rotated in a circular manner k number of times.
Example:
Input:
    arr[] = {5, 6, 1, 2, 3, 4} Output : 2

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

// Problem 5: Given a sorted array of integers, find the index of the largest element in the rotated array. The array has been rotated in a circular manner k number of times.
Example:
Input:
    arr[] = {5, 6, 1, 2, 3, 4} Output : 1

#include <iostream>
        using namespace std;

    int findMax(int arr[], int n)
    {
        int low = 0, high = n - 1;
        while (low < high)
        {
            int mid = (low + high + 1) / 2;
            if (arr[mid] > arr[low])
            {
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        return low;
    }

    int main()
    {
        int arr[] = {5, 6, 1, 2, 3, 4};
        int n = sizeof(arr) / sizeof(arr[0]);
        int index = findMax(arr, n);
        cout << "Index of largest element is: " << index << endl;
        return 0;
    }
