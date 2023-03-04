//1.Find the maximum sum subarray of size k:
#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n, int k) {
    int maxSum = 0; // variable to store maximum sum subarray
    // find the sum of the first k elements
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }
    int windowSum = maxSum; // variable to store sum of the current window
    // traverse the remaining elements of the array
    for (int i = k; i < n; i++) {
        // add the next element to the window and remove the first element from the window
        windowSum += arr[i] - arr[i - k];
        // update the maximum sum if the current window sum is greater
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main() {
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int maxSum = maxSubarraySum(arr, n, k);
    cout << "Maximum sum subarray of size " << k << ": " << maxSum << endl;
    return 0;
}



//2.Find the smallest subarray with a given sum:
#include <iostream>
using namespace std;

int smallestSubarrayWithSum(int arr[], int n, int targetSum) {
    int windowSum = 0; // variable to store sum of current window
    int windowStart = 0; // variable to store starting index of the window
    int minLength = n + 1; // variable to store length of smallest subarray
    // traverse the array
    for (int windowEnd = 0; windowEnd < n; windowEnd++) {
        // add the next element to the window
        windowSum += arr[windowEnd];
        // shrink the window as long as its sum is greater than or equal to the target sum
        while (windowSum >= targetSum) {
            // update the length of smallest subarray
            minLength = min(minLength, windowEnd - windowStart + 1);
            // remove the first element from the window
            windowSum -= arr[windowStart];
            // move the starting index of the window
            windowStart++;
        }
    }
    // if no subarray exists with target sum, return n+1 as specified in the problem statement
    if (minLength == n + 1) {
        return n + 1;
    }
    // otherwise return the length of smallest subarray
    return minLength;
}

int main() {
    int arr[] = { 2, 1, 5, 2, 3, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 7;
    int minLength = smallestSubarrayWithSum(arr, n, targetSum);
    if (minLength == n + 1) {
        cout << "No subarray exists with target sum" << endl;
    }
    else {
        cout << "Smallest subarray with target sum: " << minLength << endl;
    }
    return 0;
}



//3.Count the number of anagrams in a string:
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int countAnagrams(string str, string pattern) {
    unordered_map<char, int> charFrequency;
    for (char ch : pattern) {
        charFrequency[ch]++;
    }
    int windowStart = 0, windowEnd = 0, matched = 0, count = 0;
    while (windowEnd < str.length()) {
        char rightChar = str[windowEnd];
        if (charFrequency.find(rightChar) != charFrequency.end()) {
            charFrequency[rightChar]--;
            if (charFrequency[rightChar] == 0) {
                matched++;
            }
        }
        if (matched == charFrequency.size()) {
            count++;
        }
        if (windowEnd >= pattern.length() - 1) {
            char leftChar = str[windowStart];
            windowStart++;
            if (charFrequency.find(leftChar) != charFrequency.end()) {
                if (charFrequency[leftChar] == 0) {
                    matched--;
                }
                charFrequency[leftChar]++;
            }
        }
        windowEnd++;
    }
    return
