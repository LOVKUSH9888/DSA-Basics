//75. Sort Colors
/*Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]*/

///Dont use sort STL : O(NlogN)

//By using 3 pointer we can achieve = O(N) - CodeBix

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, i = 0, r = nums.size() - 1; // initialize left, right and current indices
        while (i <= r) { // continue until current index is less than or equal to right index
            if (nums[i] == 0) { // if current element is 0, swap it with the leftmost element
                swap(nums, l++, i++); // increment both l and i after swapping
            }
            else if (nums[i] == 2) { // if current element is 2, swap it with the rightmost element
                swap(nums, i, r--); // decrement r after swapping, but keep i the same
            }
            else { // if current element is 1, move to the next element
                i++;
            }
        }
    }
private:
    void swap(vector<int>& nums, int p1, int p2) { // helper function to swap elements
        int temp = nums[p1];
        nums[p1] = nums[p2];
        nums[p2] = temp;
    }
};







