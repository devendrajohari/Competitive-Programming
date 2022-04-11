/* Dynamic Programming Question */
/*
Given a string s, find the longest palindromic subsequence's length in s.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

 

Example 1:

Input: s = "bbbab"
Output: 4
Explanation: One possible longest palindromic subsequence is "bbbb".
Example 2:

Input: s = "cbbd"
Output: 2
Explanation: One possible longest palindromic subsequence is "bb".
*/


class Solution {
public:
    int longestPalindromeSubseq(string s) {
        if(s.empty()) return 0;
        vector<vector<int>> longest(s.size(), vector<int> (s.size()));
        for(int len=1; len<=s.size(); len++){
            for(int lhs=0; lhs+len<=s.size(); lhs++){
                int rhs = lhs+len-1;
                if(lhs==rhs){
                    longest[lhs][rhs] = 1;
                }
                else if(lhs+1 == rhs){
                    longest[lhs][rhs] = (s[lhs]==s[rhs]) ? 2:1;
                }else{
                    int add = s[lhs] ==s[rhs] ? 2: 0;
                    longest[lhs][rhs] = max(max(longest[lhs][rhs-1], longest[lhs+1][rhs]), longest[lhs+1][rhs-1]+ add);
                }
            }
        }
        return longest[0].back();
    }
};