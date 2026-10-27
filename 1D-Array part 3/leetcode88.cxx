#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v1;
        int n ;
        cout<<"Enter size of first array : ";
        cin>>n;
        for(int i = 0 ; i<n ; i++){
            int x;
            cin>>x;
                v1.push_back(x);
        }
        vector<int> v2;
         int m ;
        cout<<"Enter size of second array : ";
        cin>>n;
        for(int i = 0 ; i<m ; i++){
            int x;
            cin>>x;
                v2.push_back(x);
        }
        vector<int> v(m+n);
        for(int i = 0 ; i<n+m ; i++){
            for(int j = 0 ; j<n ; j++){
               v.push_back(v1.at(i));
            }
            for(int k = n ; k<m ;k++){
                v.push_back(v2.at(i));
            }
        }
        for(int i = 0 ; i<v.size() ; i++){
            cout<<v.at(i)<<" ";
        }
         sort(v.begin(),v.end());
    
}