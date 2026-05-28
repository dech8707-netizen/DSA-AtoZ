#include<bits/stdc++.h>
using namespace std;

void countDigit(int n) {
    int count = 0;
    while(n>=1) {
        n = n/10;
        count++;
    }
    cout<<count;
}

int main() {
    int num;
    cin>>num;
    countDigit(num);
    return 0;
}
