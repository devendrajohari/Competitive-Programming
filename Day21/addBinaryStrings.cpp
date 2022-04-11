/*
Problem Description

Given two binary strings, return their sum (also a binary string).
Example:

a = "100"


b = "11"
Return a + b = "111".
*/

string Solution::addBinary(string A, string B) {
    int na = A.size();
    int nb = B.size();
    int n = max(na, nb);
    int carry=0;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    string sum;
    for(int i=0; i<n; i++){
        if(i<na){
            carry = carry + A[i] - '0';
        }
        if(i<nb){
            carry = carry + B[i] - '0';
        }
        sum += carry%2 + '0';
        carry /= 2;
    }
    if(carry){
        sum = sum + '1';
    }

    reverse(sum.begin(), sum.end());

    return sum;

}
