#include<iostream>
#include<vector>
 
using namespace std;
int main() {
    int n ;
    cout<<"Enter number of elements : ";
    cin>>n;
    vector<int> v;
    int zcount = 0;
    int ocount = 0;
    for(int i = 0 ; i<n ; i++ ){
        int x;
        cin>>x;
         
            v.push_back(x);
            if(x==0){
                zcount++;
            }
            else ocount++;
        
         
    }
    for(int i = 0 ; i<zcount;i++){
        cout<<0<<" ";
    }
    for(int i = 0 ; i<ocount ; i++){
        cout<<1<<" ";
    }
     

}