/*
Problem Description

Given a string A consisting only of lowercase characters, we need to check whether it is possible to make this string a palindrome after removing exactly one character from this.

If it is possible then return 1 else return 0.



Problem Constraints
3 <= |A| <= 105

 A[i] is always a lowercase character.



Input Format
First and only argument is an string A.



Output Format
Return 1 if it is possible to convert A to palindrome by removing exactly one character else return 0.



Example Input
Input 1:

 A = "abcba"
Input 2:

 A = "abecbea"


Example Output
Output 1:

 1
Output 2:

 0

*/


int Solution::solve(string A) {
    
    int i=0;
    int n = A.size();
    int j=n-1;
    int flag=0;
    while(i<j){
        if(A[i]==A[j]){
            i++;
            j--;
        }
        else if(flag==1){
            return 0;
        }
        else{
            flag=1;
            if(A[i+1]==A[j]){
                i++;
            }else
                j--;
            }
        }
    }

    return 1;
}
