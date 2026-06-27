#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> countFrequencies(vector<int> &arr) {
    map<int,int> mpp;
    for(int i=0; i<arr.size(); i++) {
        mpp[arr[i]]++;
    }
    vector<vector<int>> res;
    for(auto it : mpp) {
        res.push_back({it.first, it.second});
    }
    return res;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    vector<vector<int>> res = countFrequencies(arr);
    for(auto it : res) {
        cout<<it[0]<<" "<<it[1]<<endl;
    }
    return 0;
}

