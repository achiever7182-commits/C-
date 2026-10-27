#include<iostream>
#include<vector>
 
using namespace std;
int main() {
    int n ;
    cout<<"Enter number of elements for first array  : ";
    cin>>n;
    vector<int> v1;
    for(int i = 0 ; i<n ; i++ ){
        int x;
        cin>>x;
        
            v1.push_back(x);
    }
    int m ;
    cout<<"Enter number of elements for first array  : ";
    cin>>m;
    vector<int> v2;
    for(int i = 0 ; i<m ; i++ ){
        int l;
        cin>>l;
        
            v2.push_back(l);
    }

    
   vector<int> v;
   for(int i = 0 ; i<m+n ; i++){
     if(v1[i]<v2[i]) v.push_back(v1[i])  , ;
     else  v.push_back(v2[i]);
   }

   for(int i = 0 ; i<v.size(); i++){
    cout<<v.at(i)<<" ";
   }
       

}
