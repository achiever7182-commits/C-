#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> nums;
    cout<<"Enter size of your array : ";
    int n ;
    cin>>n;
    for(int i = 0 ; i<n ; i++){    
        int x;
        cin>>x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());     // time complexity = O(nlogn)
    for(int i = 0 ; i<n ; i++){
        cout<<nums.at(i)<<" ";
    }
}