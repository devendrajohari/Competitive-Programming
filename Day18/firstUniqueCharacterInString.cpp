/*
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

Example 1:

Input: s = "leetcode"
Output: 0
Example 2:

Input: s = "loveleetcode"
Output: 2
Example 3:

Input: s = "aabb"
Output: -1
*/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> ump;
        for(int i=0; i<s.length();i++){
            if(ump.find(s[i])!=ump.end()){
                ump[s[i]] = ump[s[i]] + 1;
            }else{
                ump[s[i]] = 1;
            }
        }
        for(int i=0;i<s.length();i++){
            if(ump[s[i]]==1){
                return i;
            }
        }
    return -1;
    }
};