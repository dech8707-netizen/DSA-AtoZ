#include<iostream>
using namespace std;

int main() {
    int d;
    cout<<"Enter Digit";
    cin>>d;
    int i = 1;
    int sum = 0;
while(i <= 500) {
    if(i%10 == d) {
        sum = sum + i;
        
    }
    i++;
}
cout<<sum;
return 0;
}