// Container With Most Water
// Two pointers  key word ->(most)
// The "Container With Most Water" problem has been reported as asked at 
// approximately 52 companies
// test case 1 8 6 2 5 4 8 3 7  maxArea = 49

#include<iostream>
#include<vector>
using namespace std;
 
void twosum(vector<int> &nums , int target){
        // array is sorted 
        int j = nums.size()-1;
        int i = 0 ;
        while(i<j){
            if(nums[i]+nums[j] == target) {
                cout<<i<<" "<<j;
                cout<<endl;
                i++;
                j--;
            }
            else if(nums[i]+nums[j]>target) j--;
            else i++;

        }


}
int main() {
    vector<int> nums;

    int n;
    cout<<"Enter size of your array : ";
    cin>>n;

    cout<<"Enter Elements of your array : ";
    for(int i = 0 ;i<n ;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int target;
    cin>>target;
    twosum(nums,target);
}
