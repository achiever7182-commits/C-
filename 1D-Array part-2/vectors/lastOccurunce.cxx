#include<iostream>
#include<vector>
using namespace std;
int main() {

    vector<int> v;
    int n;
     
    cout<<"Enter number of element you want : ";
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
         
    }
    cout<<"Enter your number : ";
    int y;
    cin>>y;
    for(int i =v.size()-1 ; i>=0;i--){
        if(y == v.at(i)){
             cout<<"index is "<<i;
             break;

        }
        

    }

}