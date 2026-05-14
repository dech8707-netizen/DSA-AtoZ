#include<bits/stdc++.h>
using namespace std;

void pattern10(int n) {
    for(int i=1;i<=n;i++) {
        for(int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1;i<=n-1;i++) {
        for(int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern10(n);
    return 0;
}

