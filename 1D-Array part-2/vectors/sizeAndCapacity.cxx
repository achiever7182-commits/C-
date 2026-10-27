 #include<iostream>
 #include<vector>
 
 using namespace std;
 int main( ) {

  vector<int> v;       // size    capacity
  v.push_back(1);     //  1         1
  v.push_back(2);    //   2         2
  v.push_back(1);   //    3         4
  v.push_back(3);  //     4         4
  v.push_back(3); //      5         8


  cout<<v.size()<<endl;
  cout<<v.capacity();
    
           
 }
