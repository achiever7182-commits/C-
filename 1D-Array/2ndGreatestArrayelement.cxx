#include<iostream>
using namespace std;
int main( ) {
     cout<<"Enter size of array : ";

   int n ,i;
   cin>>n;
   int arr[n];
   for( i = 0 ; i<n ; i++){
    cin>>arr[i];
   }
 int max = arr[0];
 for(int i = 0 ;i<n ; i++){
    if(max<arr[i]) max = arr[i];  
 } 
 int maax = max; // maax = 5
  int smax = arr[0]; // 1 2 3 4 5
 for(int j = 0 ; j<n ; j++){
    if(arr[j]>smax and arr[j]<maax) smax = arr[j];
 }
 cout<<"the  second greatest number is "<<smax;



}