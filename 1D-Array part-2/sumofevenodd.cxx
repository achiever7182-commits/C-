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
       int sumeven = 0 ;
     for(int i = 0 ; i<n ; i = i+2){
           sumeven+=nums.at(i);
     }
     int sumodd = 0 ;
     for(int i = 1 ; i<n ; i = i+2){
           sumodd+=nums.at(i);
     }
     cout<<sumeven-sumodd;

}