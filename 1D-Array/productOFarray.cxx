#include<iostream>     // size of array
using namespace std;
int main() {
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
     int product = 1;
        int arr[n]; 
          for(int i = 0 ; i<n;i++){
            cin>>arr[i];
          }
          for(int i = 0 ; i<n ; i++){
           product = product*arr[i];
          }
          cout<<product;

}