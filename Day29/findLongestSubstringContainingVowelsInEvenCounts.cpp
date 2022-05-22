/*

Given the string s, return the size of the longest substring containing each vowel an even number of times. That is, 'a', 'e', 'i', 'o', and 'u' must appear an even number of times.

 

Example 1:

Input: s = "eleetminicoworoep"
Output: 13
Explanation: The longest substring is "leetminicowor" which contains two each of the vowels: e, i and o and zero of the vowels: a and u.
Example 2:

Input: s = "leetcodeisgreat"
Output: 5
Explanation: The longest substring is "leetc" which contains two e's.
Example 3:

Input: s = "bcbcbc"
Output: 6
Explanation: In this case, the given string "bcbcbc" is the longest because all vowels: a, e, i, o and u appear zero times.
*/


class Solution {
public:
    int findTheLongestSubstring(string s) {
       /*
       BitMasking
       
       2^4  2^3  2^2  2^1   2^0
       u    o    i    e     a
       */
        
        int res = 0, state=0;
        unordered_map<char, int> vowels ;
        vowels['a'] = 1;
        vowels['e'] = 2;
        vowels['i'] = 4;
        vowels['o'] = 8;
        vowels['u'] = 16;
        unordered_map<int, int> mp {{0, -1}};
        
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            if(vowels.find(c) != vowels.end()){
                state = state^vowels[c];
                if(mp.find(state) == mp.end()){
                    mp[state] = i;
                }
            }
            res = max(res, i-mp[state]);
        }
        return res;
    }
};