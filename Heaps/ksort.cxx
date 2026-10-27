#include<iostream>
#include<vector> 
#include<queue>
using namespace std;
int main() {
    priority_queue< int,vector<int>, greater<int> > pq;
    vector<int> nums;
    int arr[] = {6,5,3,2,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    for(int i = 0 ;i< n; i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            nums.push_back(pq.top());
            pq.pop();

        } 
    }
    while(pq.size()>0){
        nums.push_back(pq.top());
        pq.pop();
    }
    for(int i = 0 ;i<nums.size();i++){
        cout<<nums.at(i)<<" ";
    }

}