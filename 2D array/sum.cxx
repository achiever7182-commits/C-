#include<iostream>
using namespace std;
int main() {
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
    int arr[n][m];
    int sum = 0 ;
     for(int i = 0 ;i<n ; i++){
        for(int j = 0 ;j<m ; j++){
           cin>>arr[i][j];
        }
    }
    for(int i = 0 ;i<n ; i++){
        for(int j = 0 ;j<m ; j++){
           sum+=arr[i][j];
        }
    }
    cout<<sum;
}