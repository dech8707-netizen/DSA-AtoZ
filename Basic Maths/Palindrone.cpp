#include<bits/stdc++.h>
using namespace std;

bool palindrone(int num) {
    int lastDigit;
    int reverse = 0;
    int temp = num;
    while(num!=0) {
        lastDigit = num%10;
        num = num/10;
        reverse = reverse*10 + lastDigit;
    }
    if(temp==reverse) return true;
    else return false;
}
int main() {
    int num;
    cin>>num;
    cout<<palindrone(num);
    return 0;
}