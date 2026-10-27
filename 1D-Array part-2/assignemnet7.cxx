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
      
     for(int i = 0 ; i<n ; i = i+2){
            nums.at(i) =  nums.at((i)) + 10;
     }
       for(int i = 1 ; i<n ; i = i+2){
            nums.at(i) =  nums.at((i))*2;
     }
     for(int i =  0; i<n ; i++){
        cout<<nums.at(i)<<" ";
     }

}