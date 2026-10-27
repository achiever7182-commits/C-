#include<iostream>
#include<vector>
using namespace std;
void printing(vector<int>& v){
    for(int i = 0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
 
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {

            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        printing(nums1);
    }


int  main(){
    vector<int> nums1;
    vector<int> nums2;
    int n , m;
    cout<<"Enter size of first and second array : ";
    cin>>n>>m;
    // taking input for first array 
    for(int i = 0 ;i<n;i++){
        int x;
        cin>>x;
        nums1.push_back(x);
    }
    // taking input for second array 
     for(int i = 0 ;i<m;i++){
        int x;
        cin>>x;
        nums2.push_back(x);
    }
    merge(nums1,nums2,m,n);
}