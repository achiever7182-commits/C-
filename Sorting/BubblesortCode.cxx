#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;
int main() {
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    // bubble sort Algorithm
    bool flag = false;
    for(int i = 0 ; i<n-1 ; i++){  // n-1 passes
        for(int j=0 ;j<n-1-i;j++){
            

            if(nums.at(j)>nums.at(j+1)){
                swap(nums.at(j),nums.at(j+1));
                flag = true;
            }
        }
        if(flag==false){
            break;
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<nums[i]<<" ";
    }
}