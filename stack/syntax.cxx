#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
     stack<int> p;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
//      cout<<st.size()<<endl;
//     cout<<st.top();
   while(st.size()>0){
       cout<<st.top()<<" ";
       int x = st.top();
       p.push(x);
       st.pop();
   }
//    cout<<endl;
//    cout<<st.size()<<endl;
  
   while(p.size()>0){
       int x = p.top();
       st.push(x);
       p.pop();
   }
//    cout<<st.size();
}
