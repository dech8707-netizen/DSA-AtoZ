#include<bits/stdc++.h>
using namespace std;

void pattern13(int n) {
    int iniS= 2*(n-1);
    for(int i=1; i<=n; i++) {
        for(int j=1;j<=i;j++) {
            cout<<j;
        }
        for(int j=1;j<=iniS;j++) {
            cout<<" ";
           
        }
        for(int j=i; j>=1; j--) {
            cout<<j;
        }
        cout<<endl;
        iniS = iniS - 2;
    }
}

int main() {
    int n;
    cin>>n;
    pattern13(n);
    return 0;
}

