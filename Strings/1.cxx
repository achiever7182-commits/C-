#include<iostream>
using namespace std;
int main() {
    char str[] = {'a','b','c','d'};   //   {'a','b','c','d','\0'}
    for(int i = 0 ; i<4 ; i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    int i = 0 ;
    while(str[i]!='\0'){
        cout<<str[i]<<" ";
        i++;
    }
    cout<<endl;
    cout<<str;
    
}