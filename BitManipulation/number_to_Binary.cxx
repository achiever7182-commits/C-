#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string Int_to_Binary(int x){
    string c = "";
   
    while(x>=1){
     string k = to_string(x%2);
     c = c+k;
        x = x/2;
    }
    reverse(c.begin(),c.end());
    return c;
}
int main() {
    int n ;
    cout<<"Enter your number : ";
    cin>>n;
    cout<<Int_to_Binary(n);

  
}