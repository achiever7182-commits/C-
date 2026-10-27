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
    for(int i =  0; i<n-1 ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(nums.at(i)==nums.at(j)){
             flag = true;
             dup = i; break;

            }
        }
    }
    if(flag == true){
        cout<<"Your array contain duplicates at index : "<<dup;
    }
    else cout<<"Your array doesnt contain duplicates ";
}