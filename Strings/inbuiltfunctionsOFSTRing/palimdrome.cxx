#include<iostream>
#include<string>
#include<algorithm>
 
 using namespace std;
 int main() {
    string str;
    cout<<"Enter your string : ";
    getline(cin,str);
    string old = str;
     reverse(str.begin() , str.end());
     if(old == str){
        cout<<true<<endl;
        cout<<str<<endl;
     }
        else {
            cout<<false<<endl;
            cout<<str<<endl;
 }
}



