//121. Best Time to Buy and Sell Stock

//1st method:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialize variables
        int lsf = INT_MAX; // lsf stands for "lowest so far", initialize it to the maximum possible integer value
        int op = 0; // op stands for "overall profit", initialize it to 0
        int pist = 0; // pist stands for "profit if sold today", initialize it to 0
        
        // Loop through the prices array
        for(int i = 0; i < prices.size(); i++){
            // If the current price is lower than the lowest price seen so far, update lsf
            if(prices[i] < lsf){
                lsf = prices[i];
            }
            // Calculate the profit if sold today
            pist = prices[i] - lsf;
            // If the profit if sold today is greater than the overall profit, update op
            if(op < pist){
                op = pist;
            }
        }
        // Return the overall profit
        return op;
    }
};


//2nd:Solved using Array(Two Nested Loop). Brute Force Approach. =  Time Complexity : O(N^2)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), maxProfit = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(prices[j] - prices[i] > maxProfit){
                    maxProfit = prices[j] - prices[i];
                }
            }
        }
        return maxProfit;
    }
};


//3rd method : Solved using Dynamic Programming Approach (tabulation)
///Time Complexity : O(N), As we iterate the array(prices) two times. Where N = size of the array.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> maxPrices(n, 0);
        maxPrices[n-1] = prices[n-1];
        for(int i=n-2; i>=0; i--){
            maxPrices[i] = max(maxPrices[i+1], prices[i]); 
        }
        int maxProfit = 0;
        for(int i=0; i<n; i++){
            maxProfit = max(maxProfit, maxPrices[i] - prices[i]); 
        }
        return maxProfit;
    }
};



//4th method :  Solved using Dynamic Programming Approach(Space optimization).
/// Time Complexity : O(N)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyAtPrice = INT_MAX;
        int maxProfit = 0;
        for(int i=0; i<n; i++){
            buyAtPrice = min(buyAtPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - buyAtPrice); 
        }
        return maxProfit;
    }
};
