#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n ;
    int dup;
    cout<<"Enter size of your array : ";
    cin>>n;
    vector<int> nums;
    cout<<"Enter elements of your array : ";
    bool flag = false;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);

    }
    vector<int> v(n+1,0);
    for(int i = 0  ; i<n+1 ; i++){
        v.at(nums.at(i)) =  v.at(nums.at(i)) + 1 ;
        if(v.at(i)==2) {
            cout<<i; break;
        }

    }

}