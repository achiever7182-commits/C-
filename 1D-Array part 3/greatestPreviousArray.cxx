#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> nums;
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    for(int i = 0 ; i<n ; i++){
            int x;
            cin>>x;
            nums.push_back(x);
    }
    int max = 0 ;
    vector<int> min;
    min.push_back(-1);

    for(int i = 0 ; i<n ; i++){
         if(nums.at(i)>max) max = nums.at(i);
         min.push_back(max);
    }
    for(int i = 0 ; i<n ; i++){
        cout<<min.at(i)<<" ";
    }
}