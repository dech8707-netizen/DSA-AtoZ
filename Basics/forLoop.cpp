#include<iostream>
using namespace std;

int main() {
    int low, high, sum=0;
    cout<<"Enter low value: ";
    cin>>low;

    cout<<"Enter high value: ";
    cin>>high;

    for(int i = low; i <= high; i++) {
        sum = i + sum;
    }
    cout<<"Sum is : "<<sum;
    return 0;
}