#include<bits/stdc++.h>
using namespace std;
int k = 0;
int sum = 0;
int sumOfNumbers(int n) {
    if(k>n) return sum;
    sum += k;
    k++;
    return sumOfNumbers(n);

}
int main() {
    int n;
    cin>>n;
    cout<<sumOfNumbers(n);
    return 0;
}