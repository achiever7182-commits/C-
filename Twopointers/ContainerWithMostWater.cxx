// Container With Most Water
// Two pointers  key word ->(most)
// The "Container With Most Water" problem has been reported as asked at 
// approximately 52 companies
// test case 1 8 6 2 5 4 8 3 7  maxArea = 49

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxArea(vector<int> &height){
     int i = 0;
            int j = height.size()-1;
            int ans = INT_MIN;
            while(i<j){
                ans = max(ans,(j-i)*min(height[i],height[j]));
                if(height[i]>height[j]) j--;
                else i++;
    
    

            }
        return ans;
    
}
int main() {
    vector<int> height;

    int n;
    cout<<"Enter size of your array : ";
    cin>>n;

    cout<<"Enter Elements of your array : ";
    for(int i = 0 ;i<n ;i++){
        int x;
        cin>>x;
        height.push_back(x);
    }
    cout<<maxArea(height);


    
}
