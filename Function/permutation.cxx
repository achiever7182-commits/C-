#include<iostream>
using namespace std;
int fact(int n){
    int x = 1;
       for(int i = 1 ; i<=n ; i++){
        x = x*i;

       }
       return x;
         
}

int main(){
    int n ,r;
     cout<<"Enter your n : ";
     cin>>n;
     cout<<"Enter your r : ";
     cin>>r;
     cout<<"permutation of given number is = "<<fact(n)/((fact(n-r)));

}