/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.
 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/


bool isPalindrome(int x) {
        int sol = 0;
        if(x<0 || (x%10)==0 && x!=0){
            return false;
        }
        while(sol<=x){
            int pop = x%10;
            sol = sol*10 + pop;
            x = x/10;

            if(x==sol){
                return true;
            }
        }
        if(x==sol/10){
            return true;
        }
        return false;
    }