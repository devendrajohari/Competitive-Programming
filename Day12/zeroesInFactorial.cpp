/*
Given an integer n, return the number of trailing zeroes in n!.

Note that n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1.

 

Example 1:

Input: n = 3
Output: 0
Explanation: 3! = 6, no trailing zero.
Example 2:

Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.
*/

int trailingZeroes(int n) {
        int ans = 0;
        int cur = 5;
        while(cur<=n && cur <=INT_MAX/5){
            ans = ans + (n/cur);
            cur = cur*5;
        }
        return ans;
        
    }