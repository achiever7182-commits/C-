#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> &a){
   
    a.at(1) = 30;

for(int i = 0 ; i<a.size() ;i++){
        cout<<a.at(i)<<" ";
    }

}
int main() {
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
    for(int i = 0 ; i<v.size() ;i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    change(v);
    cout<<endl;
    for(int i = 0 ; i<v.size() ;i++){
        cout<<v.at(i)<<" ";
    }


}