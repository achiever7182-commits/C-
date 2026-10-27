#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {
 int n  = 1101;
 int k = n;
 string ans = "";
 while(k!=0){
    if(k%10==1) ans+='0';
    else ans+='1';
    k = k/10;
 }
 reverse(ans.begin(),ans.end());
 cout<<ans;


  
}