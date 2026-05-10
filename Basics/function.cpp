#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr) {
    int start =0;
    int end = arr.size()-1;
    while(start < end) {
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i];
    }
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    reverseArray(arr);
}