#include<iostream>
using namespace std;
int main( ) {
     int n;
     cout<<"Enter size of array : ";
     cin>>n;
     int arr[n];
     for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
     }
     int x ;
     cout<<"Enter your x : ";
     cin>>x;

     for(int i = 0 ; i<n ; i++){
        if(arr[i]==x){
            cout<<" the index of given number is "<<i<<" and element is present obviously ";
        }
        
        
     }



     

}