#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
int n = v.size();
int low = 0 , mid = 0 , high = n-1 ;
         while(mid<=high){
            if(v[mid]==2){
                int temp;
                temp = v[mid];
                v[mid] = v[high];
                v[high] = temp;
                high--;
            }
            else if(v[mid]==2){
                int temp;
                temp = v[mid];
                v[mid] = v[low];
                v[low] = temp;
                mid++ , low++;
            }
         }

}

int main(){
    vector<int> v;
    int n;
    cout<<"Enter your size of array : ";
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    for(int i = 0 ; i<n ; i++){
        cout<<v.at(i)<<" ";
    }
    
}