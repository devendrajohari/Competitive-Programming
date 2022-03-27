/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false
*/

// Optimized Approach -> And operation on n and n-1 gives 0 as they are just opposite in binary format

#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    if(not n or n == INT_MIN){
        return 0;
    }
    return ((n&(n-1))==0);
}

int main(){
    int n = 16;
    cout<<isPowerOfTwo(n);
    return 0;
}