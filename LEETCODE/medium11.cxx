#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    vector<int> height;
    cout<<"Enter your array's elements : ";
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        height.push_back(x);
    }
    int i = 0;    // lower pointer
    int j = n-1;  // higher pointer
    int max = 0;
    while(i<j){
        int h = min(height[i],height[j]);
        int b = j-i;
        int area = h*b;
        if(area>max){
            max = area;
        }
        if(height[i]>height[j]){
            j--;
        }
        else i++;

    }
    cout<<max;

}