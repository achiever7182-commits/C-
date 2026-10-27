//  MATRIX METHOD TO STORE ELEMENTS IN A GRAPH
#include<iostream>
using namespace std;
int main() {
    int n , m;      // n is number of nodes/Vertex m is number of Edges
    cin>>n>>m;
    int adj[n+1][m+1];
    for(int i = 0 ;i<n;i++){
        int u,v;     // paths 
        cin>>u>>v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    
}