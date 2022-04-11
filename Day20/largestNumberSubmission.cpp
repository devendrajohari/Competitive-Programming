/* Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

 

Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"
*/

class Solution {
public:
    string largestNumber(vector<int>& nums) {
         sort(nums.begin(), nums.end(), [](int &n1, int &n2 ){
             string num1 = to_string(n1);
             string num2 = to_string(n2);
             
             return num1+num2 > num2+num1;
         });
        
        if(nums[0]==0){
            return "0";
        }
        
        string ans="";
        for(auto x: nums){
            ans += to_string(x);
        }
        return ans;
        
             
    }
};