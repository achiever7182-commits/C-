#include<iostream>
#include<vector>
using namespace std;
int main() {
       vector<int> nums;
       int n;
       cout<<"Enter size of your array : ";
       cin>>n;
       cout<<"Enter your elements : ";
       for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
       }
       bool flag = true;
       for(int i = 0 ; i<n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(nums.at(j)<nums.at(i)){
              flag = false; break;
            }
        }
       }
       if(flag == true ){
        cout<<"array is sorted ";
       }
       else cout<<"array is not sorted";

}