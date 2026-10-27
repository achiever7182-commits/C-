 #include<iostream>
 #include<vector>
 
 using namespace std;
 int main( ) {

  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(1);
  v.push_back(3);

  cout<<v.size()<<" ";
  cout<<v.capacity();
  v.pop_back();
  cout<<endl;
   cout<<v.size()<<" ";
  cout<<v.capacity();
  

           
 }