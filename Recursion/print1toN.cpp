#include<bits/stdc++.h>
using namespace std;
int k = 0;
void print1toN(int n) {
    if(k>n) return;
    cout<<k<<endl;
    k++;
    print1toN(n);
}
int main() {
    int n;
    cin>>n;
    print1toN(n);
    return 0;
}