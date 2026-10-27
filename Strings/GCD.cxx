#include<iostream>
#include<string>
#include<set>
using namespace std;
int main() {
    string str1 = "ABABAB";
    string str2 =  "ABAB";
    int n = str1.size();
    int m = str2.size();
    string ans = "";
    // cout<<str1+str2;
   
 if(n<m){
      for(int i = 0 ;i<n ;i++){
     if(str1[i] == str2[i]){
        ans.push_back(str1[i]);
    }
   }
 }
 else{
     for(int i = 0 ;i<m ;i++){
     if(str1[i] == str2[i]){
        ans.push_back(str2[i]);
    }
   }

 }
    set<char> s;
    for(int i = 0 ;i<ans.size();i++){
        char c = ans[i];
        s.insert(c);
    }
    string anss;
     for(auto x : s){
        anss.push_back(x);
     }
     cout<<anss;
  


}