#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m ;
    int n ;
    cout<<"Enter number of rows and columns : ";
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int>(n));
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            int x;
            cin>>x;
            v[i][j] = x;
        }
    }
    //  for(int i = 0 ;i<m;i++){
    //     for(int j = 0 ;j<n;j++){
            
    //         cout<<v[i][j]<<" " ;
    //     }
    //     cout<<endl;
    // }
    vector<int> k;
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n;j++){
            k.push_back(v[i][j]);
        }
    }
    cout<<endl;
    // for(int i = 0 ;i<k.size();i++){
    //     cout<<k.at(i)<<" ";
    // }
   int r , c;
   cout<<"Enter new matrix row and columns : ";
   cin>>r>>c;
   int l = 0;
    vector<vector<int>> ans(r,vector<int>(c));
    for(int i = 0 ;i<r;i++){
        for(int j = 0 ;j<c;j++){
            ans[i][j] = k[l];
            l++;
        }
    }
    for(int i = 0 ;i<r;i++){
        for(int j = 0 ;j<c;j++){
           cout<< ans[i][j]<<" ";
            
        }
        cout<<endl;
    }

   

}