#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m;
    cout<<"Enter target : ";
    cin>>m;
    vector<int> v;
    int n ;
    cout<<"Enter your number of element : ";
    cin>>n;
    for(int i = 0 ; i<n ; i++){   

             int x;
            cin>>x;
            v.push_back(x);

    }
    for(int i = 0 ; i<v.size() ; i++){
        int k = v[i];
        for(int j = i+1 ;j <n; j++){
            int r = v.at(j);
            if(k+r==m){
                cout<<"("<<i<<","<<j<<")";
                cout<<endl;
            }
 
        }
    }


    
}