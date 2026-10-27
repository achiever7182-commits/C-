#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m , n;
    cout<<"Enter size of your martrix : ";
    cin>>m>>n;
    vector<vector<int>> matrix(m,vector<int>(n));
    for(int i = 0 ;i<m;i++){
        for(int j = 0 ;j<n ;j++){
            int x ;
            cin>>x;
            matrix[i][j] = x;
        }
    }
    vector<int> v;
    int minr = 0 , minc = 0;
    int maxr = m-1 , maxc = n-1;
    while(maxr>=minr and maxc>=minc){
        for(int j = minc ; j<=maxc ; j++){
            v.push_back(matrix[minr][j]);
        }
        minr++;
        for(int i = minr ; i<maxr ;i++){
            v.push_back(matrix[i][maxc]);
        }
        minc--;
        for(int i = maxr ; i>=minr ; i--){
           v.push_back(matrix[i][minc]);
        }
        minc++;
    }
    for(int i = 0 ;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    
}