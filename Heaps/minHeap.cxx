#include<iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(100);
    pq.push(-3);
    pq.push(-34);
    pq.push(20);
    cout<<pq.top();

}