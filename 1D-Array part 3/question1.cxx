// SORT ZEROS AND ONES
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int n ;
    cout<<"Enter number of elements : ";
    cin>>n;
    vector<int> v;
    for(int i = 0 ; i<n ; i++ ){
        int x;
        cin>>x;
        if(x == 0 || x == 1){
            v.push_back(x);
        }
        else cout<<"Enter again";
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i<n ; i++){
        cout<<v.at(i)<<" ";
    }

}