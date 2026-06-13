#include<bits/stdc++.h>
using namespace std;
int fact = 1;
int factorial(int n) {
    if(n<=0) return fact;
    fact = fact*n;
    n--;
    return factorial(n);
}
int main() {
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}