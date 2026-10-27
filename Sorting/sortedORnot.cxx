#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter your elements : "<<endl;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    bool flag = false;
    for(int i = 0 ; i<n ; i++){
        if(nums.at(i)>nums.at(i+1)){
            
              flag = true;
        }
        if(flag == true ) break;
        
    }
    if(flag == true){
        cout<<"arry is not sorted ";
    }
    else cout<<"Array is sorted";

}