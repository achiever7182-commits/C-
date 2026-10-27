#include<iostream>
using namespace std;
 
int main() {
    int n , m;
    cout<<"Enter number of rows : ";
    cin>>m;
    cout<<"Enter number of columns : ";
    cin>>n;
    int matrix[m][n];
    for(int i = 0 ; i<m ; i++){
        for(int j= 0 ; j<n ; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<endl;
    int minr = 0 , minc = 0 ;
    int maxr = m-1 , maxc = n-1;
    while(maxr>=minr and maxc>=minc){
        for(int j = minc ; j<=maxc ; j++){
            cout<<matrix[minr][j]<<" ";
        }
     if(maxr<minr || minc>maxc) break;
        minr++;
        for(int i = minr ; i<=maxr ; i++){
            cout<<matrix[i][maxc]<<" ";

        }
           if(maxr<minr || minc>maxc) break;
        maxc--;
        for(int j = maxc ; j>=minc ; j--){
            cout<<matrix[maxr][j]<<" ";
        }
           if(maxr<minr || minc>maxc) break;
        maxr--;
        for(int i = maxr ; i>=minr ; i--){
            cout<<matrix[i][minc]<<" ";
        }
          if(maxr<minr || minc>maxc) break;
        minc++;

    }

}