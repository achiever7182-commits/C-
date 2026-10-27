#include<iostream>     // size of array
using namespace std;
int main() {
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
     int sum = 0;
        int arr[n]; 
          for(int i = 0 ; i<n;i++){
            cin>>arr[i];
          }
          for(int i = 0 ; i<n ; i++){
           sum = sum + arr[i];
          }
          cout<<sum;

}