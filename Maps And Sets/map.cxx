#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
using namespace std;
int main() {
    pair<string,int> p1;
    pair<string,int> p2;
    pair<string,int> p3;
    p1.first = "Kaif";
    p1.second = 416;
    unordered_map<string,int> mp;
     p2.first = "aiman";
 p2.second = 006;
  p3.first = "alfi";
 p3.second = 06;

    mp.insert(p1);
    mp.insert(p2);
    mp.insert(p3);
    mp["ari"] = 97;
    mp.erase("ari");
    for(auto ele : mp){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<mp.size();

     
     

}
