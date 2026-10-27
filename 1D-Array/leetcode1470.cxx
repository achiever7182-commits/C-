#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n ;
    cout<<"Enter size of your array : ";
    cin>>n;
    vector<int> v;
    for(int i =  0; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m = (n)/2;
     vector<int> k(n);
  

        for (int i = 0; i < n; i++) {
            k[2 * i] = v[i];
            k[2 * i + 1] = v[i + n];
        }

      

for(int i = 0 ; i<n ; i++){
    cout<<k.at(i)<<" ";
}
}

