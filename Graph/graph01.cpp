#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int graph[N][N];
int main(){
    int n,m;// n-vertices m-edges
    cin>>n>>m;
    int graph[n+1][n+1]; 
     for(int i=0 ; i<m ; i++){// m edges ka input lia hae 
        int v1;
        int v2;
        cin>>v1>>v2;
        graph[v1][v2]=1;
        graph[v2][v1]=1;

     }
     for(int i=1; i<=n ; i++){
        for(int j=1 ; j<=n ; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
     }
     //space complexity  O(n^2)
    return 0;
}