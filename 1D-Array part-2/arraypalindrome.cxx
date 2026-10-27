#include<iostream>
#include<vector>
using namespace std;
int main() {
       vector<int> nums;
       int n;
       cout<<"Enter size of your array : ";
       cin>>n;
       cout<<"Enter your elements : ";
       for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
       }
       vector<int> reverse;

         for(int i = n-1 ; i>=0 ; i--){
        
        reverse.push_back(nums.at(i));
       }

cout<<"your reverse array is "<<endl;
for(int i = 0 ; i<n ; i++){
    cout<<reverse.at(i)<<" ";
}
cout<<endl;


     bool flag = true;

       for(int i = 0 ; i<n ; i++){
        if(nums.at(i) != reverse.at(i)){
            flag = false; break;
        }
       }
       if(flag == true){
        cout<<"array is palindrome ";
       }
       else cout<<"not a palindrome";
     
}