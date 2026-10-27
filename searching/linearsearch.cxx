#include<iostream>
#include<vector>
using namespace std;
int main(){
    bool flag = false;
    int idx = -1;
    vector<int> nums;
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        int x ;
        cin>>x;
        nums.push_back(x);
    }
    int target ;
    cout<<"Enter your target : ";
    cin>>target;
    for(int i = 0 ; i<n ;i++){
        if(target == nums.at(i)){
              flag = true ;
              idx = i;
              break;

        }
    }
    if(flag == true){
        cout<<idx;
    }
    else cout<<"element not found";
}