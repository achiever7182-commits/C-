#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    string n1 = "203";
    string n2 = "2";
    int i = stoi(n1);
    int j = stoi(n2);
    int k = i*j;
   string ans = to_string(k);
   cout<<ans;

}