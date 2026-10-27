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
       cout<<"Enter your number : ";
       int x;
       cin>>x;
     for(int i = 0 ; i<n-2 ; i++){
        for(int j = i+1 ; j<n-1 ; j++){
            for(int k = j+1 ; j<n ; j++){
                if(x==nums.at(i)+nums.at(j)+nums.at(k)){
                    cout<<"("<<i<<","<<j<<","<<k<<")"<<endl;
                }
            }
        }
     }
}