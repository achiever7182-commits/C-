#include<iostream>
#include<math.h>
using namespace std;
int main( ) {
      int n ;
      int num = 0;
      int p = 0;
      int number = 0;
      cout<<"Enter your number : ";
      cin>>n;
      while(n!=0){
        num = n%10;   
        n = n/10;
       int k =  pow(2,p);
        p++;
        number = num*k+number ;
        
      }
      cout<<number;
}