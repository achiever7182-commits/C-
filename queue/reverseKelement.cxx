#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int> &q){
    int n = q.size();
      for(int  i = 0 ;i<n;i++){
      int x = q.front();
      cout<<x<<" ";
      q.pop();
      q.push(x);
  }
}

void Kreverse(queue<int> &q , int k){
    int m = q.size();
    stack<int> st1;
    for(int i = 0 ;i<k;i++){
        st1.push(q.front());
        q.pop();
    }
    stack<int> st2;
    int n = q.size();
    for(int i = 0 ;i<n;i++){
        st2.push(q.front());
        q.pop();
    }
    stack<int> st3;
    int s = st2.size();
    for(int i = 0 ;i<s;i++){
        st3.push(st2.top());
        st2.pop();
    }
    for(int i = 0 ;i<m;i++){
        if(i<k){
            q.push(st1.top());
            st1.pop();
        }
        else{
            q.push(st3.top());
            st3.pop();
        }
    }
    display(q);

    
    
}
int main() {
    queue<int> q;
     
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
      Kreverse(q,3);
    
    
       
 

}
