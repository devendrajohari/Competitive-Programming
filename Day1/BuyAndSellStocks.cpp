/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/



// Maximum Suffix Approach

/*

int maxSuffix(vector<int>& prices){
    int max_profit = 0;
    int max_suffix = 0;
    int n = prices.size();
    for(int i=n-1; i>=0;i--){
        max_suffix = max(max_suffix, prices[i]);
        max_profit = max(max_profit, max_suffix - prices[i]);
    }
    return max_profit;
}
*/

#include <bits/stdc++.h>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
    int profit = 0;
    int min_price = INT_MAX;
    for(int i=0; i<prices.size(); i++){
        profit = max(profit, prices[i]-min_price);
        if(prices[i]< min_price){
            min_price = prices[i];
        }
    }
    return profit;
}

int main(){
    vector<int> prices = {7, 1 , 5, 3, 6, 4};
    int profit = maxProfit(prices);
    cout<< profit<<"\n";
}



