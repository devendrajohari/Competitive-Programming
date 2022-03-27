/*
Given a number N, verify if N is prime or not.

Return 1 if N is prime, else return 0.

Example :

Input : 7
Output : True
*/

#include<iostream>
using namespace std;

int isPrime(int A) {
    if(A==1 || A==0){
        return 0;
    }
    for(int i=2;i<A/2;i++){
        if(A%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}
