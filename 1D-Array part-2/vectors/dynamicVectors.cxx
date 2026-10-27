  #include<iostream>
 #include<vector>
 
 using namespace std;
 int main( ) {
 int x ;
  vector<int> v;
  int n ;
  cout<<"Enter the number of elements you wants : ";
  cin>>n;
  for(int i = 0 ; i<n ; i++){
        
         cin>>x;
         v.push_back(x);
        
  }
  for(int i = 0 ; i<n ; i++){
         cout<<v[i]<<" ";
  }

           
 }