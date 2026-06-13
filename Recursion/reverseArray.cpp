#include<bits/stdc++.h>
using namespace std;
int i = 0;
void reverseArray(int arr[], int n) {
    if(i==n/2) return;
    swap(arr[i],arr[n-i-1]);
    i++;
    reverseArray(arr,n);
}
int main() {
    int arr[5] = {1,2,3,4,5};
    reverseArray(arr,5);
    for(int i=0; i<=4; i++) {
        cout<<arr[i];
    }
    return 0;
}