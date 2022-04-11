/*KMP ALGORITHM*/
/*
Problem Description

Given a string A consisting of lowercase characters.

We need to tell minimum characters to be appended (insertion at end) to make the string A a palindrome.



Problem Constraints
1 <= |A| <= 105

A consists only of lower-case characters.



Input Format
First argument is an string A.



Output Format
Return a integer denoting the minimum characters to be appended (insertion at end) to make the string A a palindrome.



Example Input
Input 1:

 A = "abede"
Input 2:

 A = "aabb"


Example Output
Output 1:

 2
Output 2:

 2
*/

int Solution::solve(string A) {
    int i=0; int j=A.size()-1; int k=0;
    while(i<j){
        if(A[i]==A[j]){
            i++;
            j--;
        }
        else{
            k++;
            i=k;
            j=A.size()-1;
        }
    }
    return k;
}
