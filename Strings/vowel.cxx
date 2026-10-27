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
    int vc = 0 ;
    for(int i = 0 ; i<n ; i++){
          if(c[i]=='a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u'){
            vc++;
          }
    }
    cout<<vc;

}