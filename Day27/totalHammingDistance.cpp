/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given an integer array nums, return the sum of Hamming distances between all the pairs of the integers in nums.

 

Example 1:

Input: nums = [4,14,2]
Output: 6
Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
showing the four bits relevant in this case).
The answer will be:
HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
Example 2:

Input: nums = [4,14,4]
Output: 4

*/


class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int distance=0;
        for(int i=0; i<32; i++){
            int one=0, zero=0;
            for(auto x:nums){
                if (x & ( 1 << i )){
                    one++;
                }else{
                    zero++;
                }
            }
            distance = distance + one*zero;
        }
        return distance;
    }
};