#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of your array : ";
    cin>>n;
    vector<int> v;
    for(int i =  0; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(v[i]>v[j]){
                int temp;
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
     vector<int> k;
     for(int i = 0 ; i<n ; i++){
        k.push_back(v.at(i)*v.at(i));
     }
     for(int i = 0 ; i<n ; i++){
        cout<<k.at(i)<<" ";
     }
}