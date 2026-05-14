#include<bits/stdc++.h>
using namespace std;

void pattern11(int n) {
    int k =1;
    for(int i=1;i<=n;i++) {
        if(i%2!=0) k = 1;
        else k = 0;
        for(int j=1; j<=i; j++) {
            cout<<k;
            k = 1-k;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin>>n;
    pattern11(n);
    return 0;
}

