/*
Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len=0;
        int n = s.length();
        vector<int> mapp(256, -1); // store last index for chracters
        int l = 0;
        for(int r=0; r<n; r++){
            l = max(l , mapp[s[r]]+1);
            max_len = max(max_len, r-l+1);
            mapp[s[r]] = r;
        }
        return max_len;
    }
};