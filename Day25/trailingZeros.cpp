/*
Problem Description

Given an integer A, count and return the number of trailing zeroes.



Problem Constraints
1 <= A <= 109



Input Format
First and only argument is an integer A.



Output Format
Return an integer denoting the count of trailing zeroes.



Example Input
Input 1:

 A = 18
Input 2:

 A = 8


Example Output
Output 1:

 1
Output 2:

 3

*/

/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int solve(int A) {
    int count = 0;
    while(A!=0){
        if(A&1){
            break;
        }

        count++;
        A=A>>1;
    }
    return count;
}
