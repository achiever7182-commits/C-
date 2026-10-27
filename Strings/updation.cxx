#include<iostream>
#include<string>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of your string : ";
    cin>>n;
    char c[n] ;
    for(int i = 0 ; i<n ; i++){
        cin>>c[i];
    }
     
    for(int i = 0 ; i<n ; i++){
          if(i%2==0){
              c[i] = 'a';
          }
          }
    
    cout<<c;

}