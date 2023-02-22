//Max Subarray = Kadane's Algorithm
/*Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.*/

///Here we ca solve this by using three fpr nested loop = O(N^3) == o(n^2)
///bUT BY USING KADANE'S ALGO we can optimize it more == sum & maximum

///Brute force :  TLE

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums), ans = INT_MIN;
        for(int i = 0; i < n; i++) 
            for(int j = i, curSum = 0; j < n ; j++) 
                curSum += nums[j],
                ans = max(ans, curSum);        
        return ans;
    }
};

///Recursively : TLE 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {    
        return solve(nums, 0, false);
    }
    int solve(vector<int>& A, int i, bool mustPick) {
		// our subarray must contain atleast 1 element. If mustPick is false at end means no element is picked and this is not valid case
        if(i >= size(A)) return mustPick ? 0 : -1e5;       
        if(mustPick)
            return max(0, A[i] + solve(A, i+1, true));                  // either stop here or choose current element and recurse
        return max(solve(A, i+1, false), A[i] + solve(A, i+1, true));   // try both choosing current element or not choosing
    }
};


///1st solution : By the code skool

// This class provides a solution to find the maximum sum of any contiguous subarray in a given vector of integers.
class Solution {
public:
    // This function finds the maximum sum of any contiguous subarray in the given vector of integers.
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = INT_MIN; // initialize the maximum sum as the smallest possible integer
        
        int currSum = 0; // initialize the current sum as 0
        
        // iterate through the vector, updating the current sum and maximum sum at each index
        for (int i=0;i<nums.size();i++){
            currSum = max(currSum + nums[i], nums[i]); // the current sum is either the sum of the current element and the previous sum or just the current element
            maxSum = max(maxSum, currSum); // update the maximum sum if the current sum is greater
        }
        
        return maxSum; // return the maximum sum found
    }
};




//Solution -1 == Tabular - Bottom-Up DP solution
// This function finds the maximum sum of any contiguous subarray in a given vector of integers.

int maxSubArray(const vector<int>& nums) {
  int leader = nums[0]; // initialize the current maximum sum as the first element of the vector
  int curr_sum = nums[0]; // initialize the current sum as the first element of the vector

  // iterate through the vector, updating the current sum and current maximum sum at each index
  for (int i = 1; i < nums.size(); i++) {
    curr_sum = max(nums[i], nums[i] + curr_sum); // the current sum is either the current element or the sum of the current element and the previous sum
    leader = max(leader, curr_sum); // update the current maximum sum if the current sum is greater
  }

  return leader; // return the maximum sum found
}


//Tabular Solution 

// This function finds the maximum sum of any contiguous subarray in a given vector of integers.
int maxSubArray(const vector<int>& nums) {
  vector<int> dp(nums.size()); // initialize a vector to store the maximum sum of subarrays ending at each index
  dp[0] = nums[0]; // the maximum sum of a subarray ending at the first index is just the first element

  // iterate through the vector, updating the maximum sum of subarrays ending at each index
  for (int i = 1; i < nums.size(); i++) {
    dp[i] = max(nums[i], dp[i - 1] + nums[i]); // the maximum sum of a subarray ending at the current index is either the current element or the sum of the current element and the maximum sum of a subarray ending at the previous index
  }

  return *max_element(dp.begin(), dp.end()); // return the overall maximum sum found in the dp vector
}

