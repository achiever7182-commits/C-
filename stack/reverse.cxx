 #include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
     stack<int> p;
     stack<int> k;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
//      cout<<st.size()<<endl;
    // cout<<st.top()<<" ";
   while(st.size()>0){
       
       int x = st.top();
       p.push(x);
       st.pop();
   }
 
  
   while(p.size()>0){
       int x = p.top();
       k.push(x);
       p.pop();
   }
   while(k.size()>0){
       int x = k.top();
       st.push(x);
       k.pop();
   }
  
   
   
}
