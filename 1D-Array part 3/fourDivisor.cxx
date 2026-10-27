#include<iostream>
#include<vector>
using namespace std;
  int sumFourDivisors(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        int k = 0 ;
int sum = 0;
        while(k!=n){
            int a = nums[k];
            for(int i = 1;i<=a;i++){
                if(a%i==0){
                    v.push_back(i);
                }
            }
            if(v.size()==4){
                for(int i = 0 ;i<v.size();i++){
                    sum+=v[i];
                }
            }
            k++;
            for(int i = 0 ;i<v.size();i++){
                v[i] = 0;
            }

        }
        return sum;
    }
int main(){
    vector<int> a(3);
    a[0] = 21;
    a[1] = 4;
    a[2] = 7;
    int ans = sumFourDivisors(a);
    cout<<ans;

}