#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int  main() {
    vector<int> nums ;
    nums.push_back(3);
    nums.push_back(13);
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(4);
    nums.push_back(12);
    for(int i = 0 ;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
  //  3 13 1 5 4 12 
  //  0 1  2 3 4 5
    reverse(nums.begin()+1,nums.begin()+3+1);
     for(int i = 0 ;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
     
}