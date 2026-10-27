#include<iostream>
using namespace std;

int main() {
    char ch ;
    cout<<"Enter your letter : ";
    cin>>ch;
    int x = ch;
    
    
    if((x>=65 and x<=90) or (x>=97 and x<=121)){
        cout<<"a letter from alphabets ";
    }
    else cout<<"not a letter from alphabets ";
    

}