/*
Find if Given number is power of 2 or not. 

More specifically, find if given number can be expressed as 2^k where k >= 1.

Input:

number length can be more than 64, which mean number can be greater than 2 ^ 64 (out of long long range)
Output:

return 1 if the number is a power of 2 else return 0

Example:

Input : 128
Output : 1
*/

string longDivision(string number, int divisor){
    string ans;
    int idx=0;
    int  temp = number[idx] - '0';
    while(temp < divisor)
        temp = temp*10 + number[++idx] - '0';

    while (number.size() > idx){
        ans = ans + (temp /divisor) + '0';
        temp = (temp % divisor)*10 + number[++idx] - '0';
    }
}
int Solution::power(string A) {
}
