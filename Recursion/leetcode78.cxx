#include<iostream>
#include<string>
#include<vector>
using namespace std;
void sub(string ans , string orignal,vector<string> &v){
    if(orignal==""){
        v.push_back(ans);
        
        return;
    }
    char c = orignal[0];
    sub( ans+c,orignal.substr(1),v );
    sub( ans,orignal.substr(1),v);
    
    
    
}
    int main(){
        vector<string> v;
        string str = "abc";
        sub("",str,v);
        for(int i = 0 ;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        cout<<v[v.size()-2];
    }