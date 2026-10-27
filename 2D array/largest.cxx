#include<iostream>
#include<algorithm>
#include<climits>

using namespace std;
int main() {
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>n;
    cout<<"Enter number of columns : ";
    cin>>m;
    int arr[n][m];
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            cin>>arr[i][j];
        }
    }
    int high = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            if(high<arr[i][j]){
                  high = arr[i][j];
            }
           
        }
    }
    cout<<"max element is : "<<high;
    
}