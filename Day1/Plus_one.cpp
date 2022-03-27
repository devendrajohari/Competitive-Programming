/*

You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].


*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> plusone(vector<int>& digits){
    short i = 0;
    bool carry =0;
    for(i= digits.size()-1; i>=0; i--){
        if(digits[i]<= 8){
            digits[i]++;
            carry = 0;
            break;
        }
        else{
            digits[i] = 0;
            carry = 1;
        }
    }
    if (carry) digits.insert(digits.begin(), 1);
    
    return digits;
}
int main(){
    vector<int> digits = {1, 2, 3};
    vector<int> newdigits = plusone(digits);
    for(int i=0; i< newdigits.size(); i++){
        cout<< newdigits[i]<<" ";
    }
    cout<<"\n";
    return 0;
}s
