#include<iostream>
using namespace std;
void num(int n,int i  ){
     if(i>n){
        return ;
     }
     cout<<i<<endl;
     num(n,i+1);


}
int main(){
    cout<<"Enter your number : ";
    int n ;
    cin>>n;
     
     
     num(n,1);
}