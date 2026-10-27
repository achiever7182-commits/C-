#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string s = " ";
    int n = s.size();
    int i = 0 ;
    int j = n-1;
    bool flag = true;
    while(i<j){
       while(i<j and !isalnum(s[i])){
        i++;
       }
       while(i<j and  !isalnum(s[j])){
        j--;
       }
       if(tolower(s[i])!=tolower(s[j])) {
       flag = false;
        break;
       }
       i++;
       j--;

    }
    cout<<flag;
}