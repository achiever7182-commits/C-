#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m , n;
    cout<<"Enter number of rows and columns in your matrix : ";
    cin>>m>>n;
     vector<vector<int>> grid(m,vector<int>(n));

      for(int i = 0 ;i<m;i++){
        for(int j = 0;j<n;j++){
            cin>>grid[i][j] ;
        }
         
    }
    //   int m = grid.size();
    //     int n = grid[0].size();
        for(int i = 0 ;i<m;i++){
            if(grid[i][0] == 0) {
                for(int j = 0 ;j<n ;j++){
                    if(grid[i][j] == 0) grid[i][j] = 1;
                    else grid[i][j] = 0;
                }
            }
            
        }
        for(int i = 0 ;i<n ;i++){
            int noz = 0 ;
            int noo = 0;
            for(int j = 0 ;j<m;j++){
                if(grid[j][i] == 0) noz++;
                else noo++;
            }
           if(noz>noo){
             for(int j = 0 ;j<m;j++){
                 if(grid[j][i] == 0) grid[j][i] = 1;
                    else grid[j][i] = 0;
                
            }
           }
        }
        int score = 0 ;
        for(int i = 0 ;i<m;i++){
            int x = 1;
            for(int j = n-1 ;j>=0;j--){
               score+=grid[i][j]*x;
               x *=2;
            }
            
        }
        cout<<score;


}
