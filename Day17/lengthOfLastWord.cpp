/*
Problem Description

Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

Example:

Given s = "Hello World",


return 5 as length("World") = 5.

Please make sure you try to solve this problem without using library functions. Make sure you only traverse the string once.



Note:You only need to implement the given function. Do not read input, instead use the arguments to the function. Do not print the output, instead return values as specified. Still have a doubt? Checkout Sample Codes for more details.
*/


int Solution::lengthOfLastWord(const string A) {
    int count=0;
    int len=A.length();
    
    for(int i=len-1; i>=0; i--){
        if(A[i]!=' '){
            int j=i;
            while(A[j]!=' ' && j>=0){
                count++;
                j--;
            }
            break;
        }
    }
    return count;
}

/*
int lengthOfLastWord(const string A){
    int cnt=0;
    int i=A.length()-1;
    while(A[i]==' ')
        i--;
    
    for(;i>=0 && A[i]!=' '; i--)
        cnt++;

    return cnt;
}
*/
