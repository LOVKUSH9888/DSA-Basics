//By using backtracking & recursive approach
//Codebix
//Permutation finding = 3! = 3*2*1 = 6


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res; // Create an empty vector to store all permutations
        vector<bool> visited(nums.size(), false); // Create a boolean vector to keep track of which numbers have been visited
        backtrack(res, nums, {}, visited); // Call the backtrack function to generate permutations
        return res; // Return the list of permutations
    }
    
    void backtrack(vector<vector<int>>& res, vector<int>& nums, vector<int> curr, vector<bool>& visited) {
        // If the current list contains all the numbers, add it to the result vector and return
        if(curr.size() == nums.size()) {
            res.push_back(curr);
            return;
        }
        
        // Iterate through all the numbers
        for(int i = 0; i < nums.size(); i++) {
            // If the number has already been visited, skip it
            if(visited[i]) continue;
            
            // Add the number to the current list and mark it as visited
            curr.push_back(nums[i]);
            visited[i] = true;
            
            // Call the backtrack function recursively with the updated list and visited vector
            backtrack(res, nums, curr, visited);
            
            // Remove the last number from the current list and mark it as unvisited
            curr.pop_back();
            visited[i] = false;
        } 
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> permutations = s.permute(nums);
    for(auto permutation: permutations) {
        for(auto num: permutation) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}


//2nd easy way:
class Solution {
public:
    void nextPermutation(vector<int> &num) 
    {
        if (num.empty()) return;
        
        // in reverse order, find the first number which is in increasing trend (we call it violated number here)
        int i;
        for (i = num.size()-2; i >= 0; --i)
        {
            if (num[i] < num[i+1]) break;
        }
        
        // reverse all the numbers after violated number
        reverse(begin(num)+i+1, end(num));
        // if violated number not found, because we have reversed the whole array, then we are done!
        if (i == -1) return;
        // else binary search find the first number larger than the violated number
        auto itr = upper_bound(begin(num)+i+1, end(num), num[i]);
        // swap them, done!
        swap(num[i], *itr);
    }
};