 #include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
 
   
   cout<<"Enter your string : ";
   string s;

   getline(cin,s);
  int n = s.size();
  int count = 0 ;
   for(int i = 0 ; i<n ; i++){
    if(i==0){
        if(s[i]!=s[i+1]) count++;
    }
   else if(s[i]!=s[i+1] and s[i]!=s[i-1]){
    count++;
   }
   
   }
   cout<<count;
  
     
}