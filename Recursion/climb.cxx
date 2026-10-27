#include<iostream>
using namespace std;
int climb(int n){
     if(n==0) return 1;
     if(n<0) return 0;
     return  climb(n-2)+climb(n-1)+climb(n-3);
     
    
    

}
int main() {
    int n;
    cout<<"Enter your climb number  : ";
    cin>>n;
   cout<< climb(n);
     
 
}