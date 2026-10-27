#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main() {
    queue<int> q;
    stack<int> st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    int n = q.size();
  for(int i = 0 ;i<n;i++){
      st.push(q.front());
      q.pop();
  }
  int m  = st.size();
  for(int i = 0 ;i<m;i++){
      q.push(st.top());
      st.pop();
  }
  for(int  i = 0 ;i<q.size();i++){
      int x = q.front();
      cout<<x<<" ";
      q.pop();
      q.push(x);
  }
}
