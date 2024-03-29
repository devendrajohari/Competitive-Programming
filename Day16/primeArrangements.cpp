/*
Return the number of permutations of 1 to n so that prime numbers are at prime indices (1-indexed.)

(Recall that an integer is prime if and only if it is greater than 1, and cannot be written as a product of two positive integers both smaller than it.)

Since the answer may be large, return the answer modulo 10^9 + 7.

 

Example 1:

Input: n = 5
Output: 12
Explanation: For example [1,2,5,4,3] is a valid permutation, but [5,2,3,4,1] is not because the prime number 5 is at index 1.
Example 2:

Input: n = 100
Output: 682289015
*/

class Solution {
public:
    int numPrimeArrangements(int n) {
                
        int M = pow(10, 9) + 7;
         vector<bool> seive(n + 1, true);
        seive[1] = false;
        int no_of_primes = 0;
        for(int i = 2; i <= n; i++)
            if(seive[i])
            {
                no_of_primes++;
                int tmp = 2;
                while(tmp * i <= n)
                    seive[tmp * i] = false, tmp++;
            }
        
        long long ans = 1;
        for(int i = 1; i <= no_of_primes; i++)
            ans = (ans * i) % M;
        
        for(int i = 1; i <= n - no_of_primes; i++)
            ans = (ans * i) % M;
            
        return ans;
        
        
        
    }
};