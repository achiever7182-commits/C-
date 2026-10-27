 #include<iostream>
 #include<vector>
 
 
 using namespace std;
 
 

 int main( ) {
    vector<int> v;
     int n;
   cout<<"Enter number of element you want in array : ";
cin>>n;

    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

 

     vector<int> v1;
     for(int i = n-1 ; i>=0 ; i--){
        v1.push_back(v.at(i));
     }
     for(int i = 0 ; i<n ; i++){
        cout<<v1.at(i)<<" ";
     }

           
 }