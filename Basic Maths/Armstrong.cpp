#include<bits/stdc++.h>
using namespace std;

bool armstrong(int num) {
    int digit;
    int sum = 0;
    int temp = num;
    while(num!=0) {
        digit = num%10;
        num = num/10;
        sum = sum + (digit*digit*digit);
 
    }
    if(temp==sum) return true;
    else return false;
}
int main() {
    int num;
    cin>>num;
    cout<<armstrong(num);
    return 0;
}