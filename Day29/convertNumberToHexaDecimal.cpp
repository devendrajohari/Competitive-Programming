/*
Given an integer num, return a string representing its hexadecimal representation. For negative integers, two’s complement method is used.

All the letters in the answer string should be lowercase characters, and there should not be any leading zeros in the answer except for the zero itself.

Note: You are not allowed to use any built-in library method to directly solve this problem.

 

Example 1:

Input: num = 26
Output: "1a"
Example 2:

Input: num = -1
Output: "ffffffff"

*/


class Solution {
public:
    string toHex(int num) {
        if(num==0){
            return "0";
        }
        unsigned int num1 = num;
        string hex="";
        int base = 16;
        int rem;
        
        while(num1>0){
            rem = num1%base;
            if(rem < 10){
                hex += ('0' + (rem));
            }else{
                hex += ('a' + (rem%10));
            }
            
            num1 = num1 / base;
        }
        
        reverse(hex.begin(), hex.end());
        return hex;
    }
};