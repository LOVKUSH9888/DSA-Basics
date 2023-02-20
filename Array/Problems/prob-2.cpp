//Help = Codebix

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Create a vector to store the result - N dynamic vector = which will be empty
        vector<vector<int>> res;

        // Check if numRows is zero and return an empty result
        if (numRows == 0) {
            return res;
        }

        // Create the first row with a single 1 and add it to the result
        res.push_back(vector<int>(1, 1));

        // Generate the subsequent rows based on the previous row
        for (int i = 1; i < numRows; i++) {
            vector<int> curr(i + 1, 1); // Create a new row with all 1's
            for (int j = 1; j < i; j++) {
                // Set the j-th element of the new row to the sum of the corresponding elements in the previous row
                curr[j] = res[i - 1][j - 1] + res[i - 1][j];
            }
            // Add the new row to the result
            res.push_back(curr);
        }

        // Return the result
        return res;
    }
};


//2nd approach-By striver
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // Create a vector of vectors to store the result
        vector<vector<int>> r(numRows);

        // Generate each row one by one
        for (int i = 0; i < numRows; i++) {
            // Resize the current row to the correct size
            r[i].resize(i + 1);

            // Set the first and last elements of the row to 1
            r[i][0] = r[i][i] = 1;

            // Generate the remaining elements of the row using the previous row
            for (int j = 1; j < i; j++) {
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
            }
        }

        // Return the result
        return r;
    }
};

//Using DP - Iterative
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans(n);             // initialize n rows
        for(int i = 0; i < n; i++) {
            ans[i] = vector<int>(i+1,1);        // ith row(0-indexed) has i+1 elements
            for(int j = 1; j < i; j++)          // 1st and last elements will be 1, rest will be sum of two elements from above row
                ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];            
        }
        return ans;
    }
};



//Top-down-approach
class Solution {
    vector<vector<int>>ans;
public:    
    vector<vector<int>>& generate(int n) {
        if(n) {
            generate(n-1);                       // generate above row first
            ans.emplace_back(vector<int>(n,1));  // insert current row into triangle
            for(int i = 1; i < n-1; i++)         // update current row values using above row
                ans[n-1][i] = ans[n-2][i] + ans[n-2][i-1];    
        }
        return ans;
    }
};