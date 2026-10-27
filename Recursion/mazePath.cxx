#include<iostream>
#include<string>
using namespace std;
// number of ways 
int maze(int sr,int sc ,int er , int ec){
    if(sr>er) return 0;
    if(sc>ec) return 0;
    if(sr==er or sc==ec) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sr+1,sc,er,ec);
    int total = rightways + downways;
    return total;

}
// total ways;
void path(int sr ,int sc,int er,int ec,string s){
    if(sr>er) return;
    if(sc>ec) {
       return;
    }
    if(sr==er and sc==ec)  {
         cout<<s<<endl; 
        return;
    };
     path(sr,sc+1,er,ec,s+'R');
    path (sr+1,sc,er,ec,s+'D');
     

}
// maze 2
int maze2(int row,int col){
    if(row == 1 or col == 1) return 1;
    if(row<1 or col<1) return 0;
    int rightways = maze2(row,col-1);
    int downways = maze2(row-1,col);
    int total = rightways + downways;
    return total;
    
}
int main(){
    // cout<<maze(0,0,2,2)<<endl;
    //  path(0,0,2,2,"");
     cout<<maze2(3,3);
}