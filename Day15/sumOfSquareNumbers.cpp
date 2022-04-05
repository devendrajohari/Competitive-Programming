/*
Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

 

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5
Example 2:

Input: c = 3
Output: false
 

Constraints:

0 <= c <= 231 - 1
*/

class Solution {
public:
    bool judgeSquareSum(int c) {
        int i=0; int j=(int)sqrt(c);
        long long r, x=(long long)c;
        while(i<=j){
            r = (long long)i*i + (long long )j*j;
            if(r==x){
                return true;
            }
            else if(r<c){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};