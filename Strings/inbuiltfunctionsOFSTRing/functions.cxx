#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
   
//    string str = "kaif";
//    cout<<str.size()<<endl;  // size
//    cout<<str<<endl;
//    str.push_back('k');   // push back
//     cout<<str;


// '+' operator for concatenation 

    //   string str = "kaif";  
    //   string ctr = "khan";
    //   str = str+ctr;
    //   cout<<str;
    
    // reverse of a string 
    string str = "kaif";
   reverse(str.begin(),str.end());
   cout<<str;
     
}