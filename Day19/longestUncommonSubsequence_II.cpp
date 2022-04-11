/*
Given an array of strings strs, return the length of the longest uncommon subsequence between them. If the longest uncommon subsequence does not exist, return -1.

An uncommon subsequence between an array of strings is a string that is a subsequence of one string but not the others.

A subsequence of a string s is a string that can be obtained after deleting any number of characters from s.

For example, "abc" is a subsequence of "aebdc" because you can delete the underlined characters in "aebdc" to get "abc". Other subsequences of "aebdc" include "aebdc", "aeb", and "" (empty string).
 

Example 1:

Input: strs = ["aba","cdc","eae"]
Output: 3
Example 2:

Input: strs = ["aaa","aaa","aa"]
Output: -1
*/

class Solution {
public:
    int lcs(string a, string b){
        int n = a.size(); int m = b.size(), i=0;
        if(n>m)
            return false;
        
        for(int j=0; j<m; j++){
            if(a[i]==b[j]){
                i++;
            }
            
            if(i==n){
                return true;
            }
        }
        return false;
    }
    
    int findLUSlength(vector<string>& strs) {
        int n = strs.size(), len = -1;
        for(int i=0; i<n; i++){
            bool poss = true;
            for(int j=0; j<n; j++){
                if(i==j) continue;
                if(lcs(strs[i], strs[j])){
                    poss = false;
                    break;
                }
            }
            if(poss){
                len = max(len, (int) strs[i].size());
            }
        }
        return len;
    }
};

