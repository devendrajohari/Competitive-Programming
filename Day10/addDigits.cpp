/*
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.
Example 2:

Input: num = 0
Output: 0
*/

#include<iostream>
using namespace std;


int addDigits(int num) {
    int sum=0;
    int rem = 0;
    bool end=false;
    
    if(num == 0){
        return 0;
    }
    while(end!=true){
        while(num!=0){
            rem = num%10;
            sum = sum + rem;
            num = num/10;
        
        }
        if(sum <10){
            end = true;
        }else{
            num = sum;
            sum = 0;
        }
    }
    return sum;
    
}

int main(){
    int n;
    cin>>n;
    cout<<addDigits(n);
}