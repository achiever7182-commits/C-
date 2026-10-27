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
 int min = arr[0];
 for(int i = 0 ;i<n ; i++){
    if(min>arr[i]) min = arr[i];
 } 
 cout<<"min number is = "<<min;




     

}