//1. Two Sum
/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/


//brute Force Approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Bruteforce approach here :-
        int n = nums.size();
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(nums[i]+nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {-1, -1};
        
    }
};