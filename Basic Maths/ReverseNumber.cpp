#include<bits/stdc++.h>
using namespace std;

int reverse(int num) {
    int lastDigit;
    int reverse = 0;
    while(num!=0) {
        lastDigit = num%10;
        num = num/10;
        reverse = reverse*10 + lastDigit; 
    }
}

int main() {
    int num;
    cin>>num;
    cout<<reverse(num);
    return 0;
}