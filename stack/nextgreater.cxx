#include<iostream>
#include<stack>
#include<string>
using namespace std;
 void display(stack<int> &st){
     if(st.size()==0) return;
     int ch = st.top();
    
     st.pop();
     cout<<ch<<" ";
     display(st);
      
     st.push(ch);
     
     
 }
     
     

int main(){
  int arr[5] = {1,2,4,3,5};
  int ans[5];
  int n = 5;
  ans[n-1] = -1;
   int i = n-2;
   stack<int> st;
   st.push(arr[n-1]);
   for(int i = n-2;i>=0;i--){
       while(st.size()>0 and st.top()<=arr[i]) {
           st.pop();
       }
         if(st.size() == 0 ) ans[i] = -1;
   else ans[i] = st.top();
   st.push(arr[i]);
   
 
       
   }
  for(int i = 0 ;i<5;i++){
      cout<<ans[i]<<" ";
  }
 

}