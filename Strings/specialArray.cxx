#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<climits>
using namespace std;
int main() {
   vector<int> alpha(26,0);
   string str = "leetcode";
   for(int i = 0 ;i<alpha.size();i++){
      int a = int(str[i]);
      alpha[a - 97]++;
   }
   int max = INT_MIN;
   int idx = -1;
   for(int i = 0 ;i<alpha.size();i++){
      if(max<alpha.at(i)) {
         max = alpha[i];
         idx = i;
      }
   }
//   cout<<max<<" "<<idx;
     char ch = char(97+idx);
     cout<<ch;
   
 }