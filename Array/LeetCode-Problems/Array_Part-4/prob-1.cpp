//1. Two Sum
/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/


//brute Force Approach = Two pointer approach

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
        //return {};
        
    }
};


//Using-Hash_Table : O(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i =0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()){
                ans.push_back(mp[target-nums[i]]);
                ans.push_back(i);               
            }
            mp[nums[i]]=i;           
        }
        return ans;
    }
};