#include<iostream>
using namespace std;
int main() {
      int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    int arr[n][m];
    for(int i = 0 ; i<n ; i++){
        for(int j= 0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    // printing 
    for(int j = 0 ; j<n ; j++){
        if(j%2==0){
        for(int i = 0 ; i<n ; i++){
                cout<<arr[i][j]<<" ";
        }
        }

        else {

for(int i = n-1 ; i>=0 ; i--){
    cout<<arr[i][j]<<" ";
}
        }
    }

}