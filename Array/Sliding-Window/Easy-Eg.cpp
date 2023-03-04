 /*Question: Given an array of integers and a target sum, 
find the subarray (continuous sequence of elements) whose sum is equal to the target sum,  

if it exists. Return the starting and ending indices of the subarray, or [-1, -1] 
if no such subarray exists. */

def find_subarray(nums, target_sum):
    /*
    Finds a subarray whose sum is equal to the target sum, if it exists.
    Returns the starting and ending indices of the subarray, or [-1, -1] if no such subarray exists.
    */
    n = len(nums)  //n = len(nums) assigns the length of the nums array to the variable n.
    left, right = 0, 0  // initialize the left and right pointers
    current_sum = 0     // initialize the current sum of the window

    while right < n:
        current_sum += nums[right]  // expand the window to the right
        while current_sum > target_sum: // shrink the window from the left
            current_sum -= nums[left]
            left += 1

        if current_sum == target_sum: // check if we found the target sum
            return [left, right] //return the starting and ending indices of the subarray

        right += 1  //move the right pointer to expand the window

    return [-1, -1]  // no such subarray exists
