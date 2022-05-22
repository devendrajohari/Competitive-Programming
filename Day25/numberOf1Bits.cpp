/*
Problem Description
 
 

Write a function that takes an integer and returns the number of 1 bits it has.


Problem Constraints
1 <= A <= 109


Input Format
First and only argument contains integer A


Output Format
Return an integer as the answer


Example Input
Input1:
    11


Example Output
Output1:
3
*/

/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int numSetBits(unsigned int A) {
    int count=0;
    while(A!=0){
        A = A & A-1;
        count++;
    }
    return count;
}
