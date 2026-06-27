#include<bits/stdc++.h>
using namespace std;
int i = 0;
bool palindromeStr(string str){
    if(i>=str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]) return false;
    i++;
    return palindromeStr(str);
}
int main() {
    string str = "madam";
    cout<<palindromeStr(str);
    return 0;
}