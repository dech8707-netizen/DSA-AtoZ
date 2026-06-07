#include<bits/stdc++.h>
using namespace std;

int gcdNum(int n1, int n2) {
    int gcd = 1;
    for(int i = 1; i<=min(n1,n2); i++) {
        if(n1%i==0 && n2%i==0) {
            gcd = i;
        }
    }
    return gcd;
}
int main() {
    int n1,n2;
    cout<<"enter two numbrs";
    cin>>n1>>n2;
    cout<<gcdNum(n1,n2);
    return 0;
}