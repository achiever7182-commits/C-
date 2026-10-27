#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {
 int n ;
 cout<<"Enter your number : ";
 cin>>n;
 int p = 0;
 int ans = 0;
//  int i = 0 ;
 while(n>0){
    
    ans += n%10*pow(2,p);
    n = n/10;
    p++;

 }
 cout<<ans;

  
}