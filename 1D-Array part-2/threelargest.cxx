#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n ;
    cout<<"Enter size of your   array : ";
    cin>>n;
     
       vector<int> nums;
       cout<<"Enter your elements in your array : ";
       for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
       }
       int l = 0 , sl = 0  , tl = 0 ;
       // first largest 
       for(int i = 0 ; i<n ; i++){
        if(nums.at(i)>l) l = nums.at(i);
       }
       // second largest 
        for(int i = 0 ; i<n ; i++){
        if(nums.at(i)>sl and nums.at(i)<l) sl = nums.at(i);
       }
       // third largest 
        for(int i = 0 ; i<n ; i++){
        if(nums.at(i)>tl and nums.at(i)<sl) tl = nums.at(i);
       }
       cout<<"first lagrest is "<<l<<endl;
        cout<<"second lagrest is "<<sl<<endl;
         cout<<"third lagrest is "<<tl<<endl;

      
     
}