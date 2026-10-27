#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n ;
    cout<<"Enter size of your   array : ";
    cin>>n;
     
       vector<int> nums;
       cout<<"Enter your elements in your array : ";
       for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
       }
       int x;
       cout<<"Enter your number : ";
       cin>>x;
       int count = 0 ;
       for(int i = 0 ; i<n ; i++){
        if(nums.at(i)>x) {
            count++;
        }
       }
       cout<<count;
      
     
}