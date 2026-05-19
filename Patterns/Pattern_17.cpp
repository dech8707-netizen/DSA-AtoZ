#include<bits/stdc++.h>
using namespace std;

void pattern17(int n) {
    for(int i=0; i<n;i++) {
        char ch ='A';
        int breakpoint = (2*i+1)/2;
        for(int j=0; j<n-i-1;j++) {
            cout<<" ";
        }
        for(int j=0; j<2*i+1;j++) {
            cout<<ch;
            if(j<breakpoint)
            ch++;
            else
            ch--;
            
        }
        for(int j=0; j<n-i-1;j++) {
            cout<<" ";
        }
        cout<<endl;
        
    }

}
int main() {
    int n;
    cin>>n;
    pattern17(n);
    return 0;
}