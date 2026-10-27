#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n ;
    cout<<"Enter your array size  n : ";
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int sum = 0 ;
    int x = 1 ;
    for(int i = n ; i>=0 ; i--){
        sum += nums[i]*x;
           x = x*2;
    }
    cout<<sum;
}