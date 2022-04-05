/*
You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the staircase you will build.

 

Example 1:


Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
*/

int arrangeCoins(int n) {
    if(n<1){
        return 0;
    }
    int ans=0;
    for(long int i=1;i<=n;i++){
        if((i*i+i)==2*(long)n){
            ans= i;
            break;
        }else if((i*i + i)>2*(long)n){
            ans= i-1;
            break;
        }
    }
    return ans;
}