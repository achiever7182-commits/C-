#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int dup = arr[0];
    for(int i = 0 ; i<n ; i++){
        if(arr[i+1] =dup ) dup = arr[i];
        cout<<"elements are duplicate"; break;
    }
}