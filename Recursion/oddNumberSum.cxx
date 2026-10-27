#include<iostream>
using namespace std;
int oddsum(int a , int b ){
    if(a>b-1) return 0;
    if(a%2!=0){
        
        return a+oddsum(a+2,b);
    } 
    else  return a+oddsum(a+1,b);
    

}
int main() {
    int a,b;
    cout<<"Enter your first number : ";
    cin>>a;
    cout<<"Enter your second number : ";
    cin>>b;
   cout<< oddsum(a,b);
}