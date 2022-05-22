/*
Problem Description

Reverse the bits of an 32 bit unsigned integer A.



Problem Constraints
0 <= A <= 232



Input Format
First and only argument of input contains an integer A.



Output Format
Return a single unsigned integer denoting the decimal value of reversed bits.



Example Input
Input 1:

 0
Input 2:

 3


Example Output
Output 1:

 0
Output 2:

 3221225472

*/

unsigned int Solution::reverse(unsigned int A) {
    unsigned int B = 0;
    for(int i=0; i<32; i++){
        int k = A & 1;
        B <<= 1;
        B |= k;
        A >>= 1;
    }
    return B;
}
