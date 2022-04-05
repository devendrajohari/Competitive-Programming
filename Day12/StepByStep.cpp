/*
Problem Description

Given a target A on an infinite number line, i.e. -infinity to +infinity.

You are currently at position 0 and you need to reach the target by moving according to the below rule:

In ith move you can take i steps forward or backward.
Find the minimum number of moves required to reach the target.



Problem Constraints
-109 <= A <= 109



Input Format
First and only argument is an integer A.



Output Format
Return an integer denoting the minimum moves to reach target.



Example Input
Input 1:

 3
Input 2:

 2
*/

int solve(int A) {
    long long target = abs(A);
    long long cur = 0;
    long long i = 1;

    while(cur<target || (cur-target &1)){
        cur = cur + i;
        i++;
    }
    return i-1;
}
