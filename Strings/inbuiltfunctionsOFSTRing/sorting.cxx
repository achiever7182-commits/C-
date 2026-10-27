 #include<iostream>
#include<string>
#include<algorithm>
using namespace std;  // leetcode 242
int main() {
 
   
   cout<<"Enter your string : ";
   string s;

   getline(cin,s);
  sort(s.begin(),s.end());
     cout<<"Enter your second string : ";
   string c;

   getline(cin,c);
    sort(c.begin(),c.end());
    if(s==c){
        cout<<"True";
    }
    else cout<<"false";

  
     
}