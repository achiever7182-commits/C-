 #include<iostream>
#include<vector>
using namespace std;

void reverse(int i , int j ,vector<int>& a){
       while(i<=j){
          int temp;
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
         i++;
         j--;
       }

}

int main() {
    vector<int> v;
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k ; cout<<"Enter how many times you want to rotate : "; cin>>k;
    reverse(0,n-k-1,v);
    reverse(n-k,n-1,v);
    reverse(0,n-1,v);
    for(int i = 0 ; i<n ; i++){
        cout<<v.at(i)<<" ";
    }
     


}
