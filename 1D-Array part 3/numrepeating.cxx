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
        bool flag = true ;
       int nr = 0;
     for(int i = 0 ; i<n-1 ; i++){
        for(int j = i+1 ;j<n ; j++ ){
            if(nums.at(i)==nums.at(j)){
                flag = false;
            break;
           
            }
             else nr = nums.at(i); break;
            
             
      
        }

      
     }
     cout<<nr;

}