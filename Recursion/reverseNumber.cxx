#include<iostream>
using namespace std;
void num(int n ){
     if(n==0){
        return;
    }
    cout<<n;
    cout<<endl;
    num(n-1);
   

     
   
  
    

}
int main(){
    cout<<"Enter your number : ";
    int n ;
    cin>>n;
     
     num(n);
}
