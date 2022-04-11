/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int freq[26] = {'\0'};
        for(auto i: magazine){
            freq[i-'a']++;
        }
        for(auto i: ransomNote){
            freq[i-'a']--;
            if(freq[i-'a']<0){
                return false;
            }
        }
        return true;
    }
};