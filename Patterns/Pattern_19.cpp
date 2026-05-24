#include<bits/stdc++.h>
using namespace std;

void pattern19(int n) {
    int iniS=0;
    for(int i=1; i<=n;i++) {
        for(int j=1;j<=n-i+1;j++) {
            cout<<"*";
        }
        for(int j=1;j<=iniS;j++) {
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++) {
            cout<<"*";
        }
        iniS += 2;
        cout<<endl;
    }

    iniS=n*2-2;
    for(int i=1; i<=n;i++) {
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        for(int j=0;j<iniS;j++) {
            cout<<" ";
        }
        for(int j=1;j<=i;j++) {
            cout<<"*";
        }
        iniS -= 2;
        cout<<endl;
    }                                                                                                                                                                                                                                                                      

}
int main() {
    int n;
    cin>>n;
    pattern19(n);
    return 0;
}