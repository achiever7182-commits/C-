#include<iostream>
#include<vector>
using namespace std;
int fact(int n ){
int f = 1;
for(int i = 1 ; i<=n ; i++){
    f = f*1;
}
return f;
}
int com(int i , int j ){
    return fact(i)/(fact(j)*fact(i-j));
}
int main() {
    
   int n ;
   cout<<"Enter number of rows of your triangle : ";
   cin>>n;
   vector<vector<int>> v(n);
   for(int i = 0 ; i<n ; i++){
    for(int k = 0 ; k<n-i ; k++){
        cout<<" ";
    }
    for(int j = 0 ; j<i ; j++){
        cout<<com(i,j)<<" ";
    }
    cout<<endl;
   }


       
     


}