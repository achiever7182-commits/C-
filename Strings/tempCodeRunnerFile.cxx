#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.size();
    if(n>10){
        int k = n-2;
        string m = to_string(k);
        string ans = "";
        ans += s[0] + m +s[n-1];
        cout<<ans;


    }
    else cout<<s;
}