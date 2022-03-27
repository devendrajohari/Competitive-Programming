/*
Given a positive integer num, write a function which returns True if num is a perfect square else False.

Follow up: Do not use any built-in library function such as sqrt.

 

Example 1:

Input: num = 16
Output: true
Example 2:

Input: num = 14
Output: false
*/

#include<iostream>
using namespace std;

 bool isPerfectSquare(int num) {
        long long low = 1;
    long long high = num;
    while(low<=high){
        long long mid = (low + high) /2;
        if(mid*mid<num){
            low = mid + 1;
        }
        else if(mid*mid>num){
            high = mid - 1;
        }else{
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    cout<<isPerfectSquare(n);
}