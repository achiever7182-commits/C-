#include<iostream>
#include<stack>
#include<string>
using namespace std;
 void display(stack<char> &st){
     if(st.size()==0) return;
     char ch = st.top();
    
     st.pop();
     display(st);
      cout<<ch<<" ";
     st.push(ch);
     
     
 }
     
     

int main(){
   string s = "aaabbcadded";
   stack<char> st;
   for(int i = 0  ;i<s.size();i++){
       if(st.size()==0){
           st.push(s[i]);
       }
      else if(st.top()!=s[i]){
           st.push(s[i]);
       }
   }
   display(st);
}