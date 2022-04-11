
/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Example 3:

Input: s = "bb"
Output: 2
*/
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> ump;
        for(int i=0; i<s.length(); i++){
            if(ump.find(s[i])!=ump.end()){
                ump[s[i]]++;
            }else{
                ump[s[i]] = 1;
            }
        }
        bool present=false;
        int length=0;
        for(auto x: ump){
            if(x.second%2==0){
                length = length + x.second;
            }
            else{
                length = length + x.second-1;
                present = true;
            }
        }
        if(present){
            return length+1;
        }
        return length;
    }
};