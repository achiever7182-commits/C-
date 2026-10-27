#include<iostream>
#include<vector>
using namespace std;
int main() {
    string s = "Kaif Khan";
    int n = s.size();
   string ans;
   vector<string> k(n);
   for(int i = n-1 ;i>=0 ;i++){
    int j = 0 ;
    ans+=s[j];
    if(s[j] == " "){
        k[i] = ans;
    }
   }
   cout<<ans;

}