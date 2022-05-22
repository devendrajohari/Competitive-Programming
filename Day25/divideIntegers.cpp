/*
Divide two integers without using multiplication, division and mod operator.

Return the floor of the result of the division.

Example:

5 / 2 = 2
Also, consider if there can be overflow cases. For overflow case, return INT_MAX.

Note: INT_MAX = 2^31 - 1
*/

/*
hint

1<<i  ==> 1*2^i
k<<i ==> k*2^i
*/

int Solution::divide(int A, int B) {
    long long a = A, b = B;
    int sign = 0;
    if((a>0 && b<0) || (a<0 && b>0)) sign =1;
    if(a<0) a =- a;
    if(b<0) b =-break;
    long long int ans=0, temp=0;
    for(int i=31; i>=0; i--){
        if(temp+(b<<i)<=a){
            temp += b<<i;
            ans += 1ll<<i; /*1longlong*/
        }
    }
    if(sign==1) ans=-ans;
    if(ans>INT_MAX|| ans<INT_MIN) return INT_MAX;
    return ans;
}
