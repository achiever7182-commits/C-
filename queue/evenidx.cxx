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
     int x = q.front();
     if(i%2!=0){
         q.pop();
         q.push(x);
     }
     else    q.pop();
 }
 display(q);

}
