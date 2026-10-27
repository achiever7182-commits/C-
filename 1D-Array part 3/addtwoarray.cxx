#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cin>>n;
        for(int i = 0 ;i<n ;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
         for(int i = 0 ;i<n ;i++){
     
     
     cout<<v.at(i)<<" ";
     }
 cout<<endl;
  vector<int> v1;
 int m;
 cin>>m;
     for(int i = 0 ;i<m ;i++){
         int x;
         cin>>x;
         v1.push_back(x);
     }
      for(int i = 0 ;i<m ;i++){
  
  
  cout<<v1.at(i)<<" ";
  }
  cout<<endl;
  vector<int> ans = v + v1;
  for(int i = 0 ;i<ans.size();i++){
    cout<<ans.at(i);
  }





}