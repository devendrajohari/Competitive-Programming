/*
A robot is located at the top-left corner of an A x B grid (marked ‘Start’ in the diagram below).

Path Sum: Example 1

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there?

Note: A and B will be such that the resulting answer fits in a 32 bit signed integer.

Example :

Input : A = 2, B = 2
Output : 2

2 possible routes : (0, 0) -> (0, 1) -> (1, 1) 
              OR  : (0, 0) -> (1, 0) -> (1, 1)

*/




int Solution::uniquePaths(int A, int B) {
    long long m=A-1, n=B-1, k=min(m,n), num=1, den=1;
    n=m+n;
    for(;k>0;k--,n--){
        num = num*n;
        den = den*k;
        if(num%den == 0){
            num = num/den;
            den = 1;
        }
    }
    return (int)num;
}
