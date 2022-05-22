/*
Suppose you have n integers labeled 1 through n. A permutation of those n integers perm (1-indexed) is considered a beautiful arrangement if for every i (1 <= i <= n), either of the following is true:

perm[i] is divisible by i.
i is divisible by perm[i].
Given an integer n, return the number of the beautiful arrangements that you can construct.

 

Example 1:

Input: n = 2
Output: 2
Explanation: 
The first beautiful arrangement is [1,2]:
    - perm[1] = 1 is divisible by i = 1
    - perm[2] = 2 is divisible by i = 2
The second beautiful arrangement is [2,1]:
    - perm[1] = 2 is divisible by i = 1
    - i = 2 is divisible by perm[2] = 1
Example 2:

Input: n = 1
Output: 1

*/


class Solution {
public:
    int count=0;
    int countArrangement(int n) {
        vector<int> ans(n,0);
        for(int i=0; i<n; i++) {
            ans[i] = i + 1;
        }
        check(ans, 0);
        return count;
    }
    
    void check(vector<int>& ans, int j){
        if(j==ans.size()){
            count++;
        }
        for(int i=j; i<ans.size(); i++){
            swap(ans, i, j);
            if((ans[j]%(j+1)==0) || ((j+1)%ans[j]==0)){
                check(ans, j+1);
            }
            swap(ans, i, j);
        }
        
    }
    void swap(vector<int>& ans, int i, int j){
        int temp = ans[i];
        ans[i] = ans[j];
        ans[j] = temp;
    }
    
};