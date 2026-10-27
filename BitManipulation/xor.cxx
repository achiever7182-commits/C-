#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n,  start;
    cin>>n>>start;
    vector<int> ans;
        int j = start;
        for(int i = 0;i<n;i++){
            ans.push_back(j);
           j = j+1;
        }
        int x = 0;
        for(int i = 0 ;i<n;i++){
           x = x^nums[i];
                }
}