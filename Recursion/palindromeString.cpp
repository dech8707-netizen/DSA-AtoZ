#include<bits/stdc++.h>
using namespace std;
int i = 0;
int temp;
bool palindromeStr(string str){
    if(i==str.size()/2) return;
    swap(str[i],str[str.size()-i]);
    i++;
    palindromeStr(str);
}
int main() {
    string str = "Devika";
    cout<<palindromeStr(str);
    return 0;
}