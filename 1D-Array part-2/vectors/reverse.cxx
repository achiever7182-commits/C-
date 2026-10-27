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
    for(int i = v.size()-1;i>=0;i--){
        cout<<v.at(i)<<" ";
    }

           
 }