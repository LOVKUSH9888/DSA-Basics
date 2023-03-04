///Question: Given an array of integers arr and a target sum targetSum, 
///find two distinct numbers in the array that add up to targetSum.

#include <iostream>
#include <vector>
using namespace std;

vector<int> findTwoSum(vector<int>& arr, int targetSum) {
    int left = 0; // left pointer starts at the beginning of the array
    int right = arr.size() - 1; // right pointer starts at the end of the array
    
    while (left < right) { // while the two pointers haven't crossed each other
        int currentSum = arr[left] + arr[right]; // calculate the sum of the two elements
        
        if (currentSum == targetSum) { // if we've found a match
            return {left, right}; // return the indices of the two elements
        } else if (currentSum < targetSum) { // if the sum is too small
            left++; // move the left pointer to the right
        } else { // if the sum is too big
            right--; // move the right pointer to the left
        }
    }
    
    return {}; // if no match is found, return an empty vector
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int targetSum = 9;
    
    vector<int> result = findTwoSum(arr, targetSum);
    
    if (result.size() == 2) {
        cout << "Indices of the two numbers: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No two numbers add up to the target sum." << endl;
    }
    
    return 0;
}
