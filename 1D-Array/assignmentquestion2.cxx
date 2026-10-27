#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    // second largest element of array in one pass
    int n ;
    cout<<"Enter number of elements of your array : ";
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
     
    int m = nums[0];
    for(int i = 1 ; i<n ; i++){
        if(m<nums.at(i)){
          m = nums.at(i);
        }
    }
    int sm = nums.at(0);
     for(int i = 1 ; i<n ; i++){
        if(sm<nums.at(i) && nums.at(i)<m){
          sm = nums.at(i);
        }
    }
    cout<<sm;
    
}