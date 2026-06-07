//You are given an integer n. You need to check if the number is prime or not. Return true if it is a prime number, otherwise return false.
//A prime number is a number which has no divisors except 1 and itself.

#include<bits/stdc++.h>
using namespace std;

bool primeNumber(int n) {
    for(int i =2; i<=n-1; n++) {
        if(n%i==0) {
            return false;
        }
        else {
            return true;
        }
    }
    
}
int main() {
    int num;
    cin>>num;
    cout<<primeNumber(num);
    return 0;
}