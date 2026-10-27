#include<iostream>
#include<vector>
using namespace std;
void rotation(vector<int> &nums , int r){
    int n = nums.size();
   int i =   0 ;
   int j = n-1;
          while(i<=j){
            int temp;
            temp = nums.at(i);
            nums.at(i) = nums.at(j);
            nums.at(j) = temp;
            i++;
             
          }
        

}
int main() {
        vector<int> nums;
        int n;
        cout<<"Enter size of array : ";
        cin>>n;
        for(int i = 0 ; i<n; i++){
                 int x;
                 cout<<"enter your element at index : "<<i<<" = ";
                 cin>>x;
                 nums.push_back(x);
        }
        int r;
        cout<<"Enter number of rotation : ";
        cin>>r;
        for(int i = 0 ; i<r ; i++){
                rotation(nums , r);
        }
        for(int i = 0 ; i<n ; i++){
            cout<<nums.at(i)<<" ";
        }
}