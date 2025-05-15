
 #include<bits/stdc++.h>
 using namespace std;
 const int N=1e3+10;
 int graph1[N][N];

 vector<pair<int,int>> graph2[N];
 
 int main(){
     int n,m;// n number of vertices and m number of edges 
     cin>>n>>m;
     for(int i=0;i<m ; i++){
        int v1;
        int v2;
        int wt;

        cin>>v1>>v2>>wt; //v1 vertex 1 and v2 vertex 2 and wt is the weight of edge between them 
        graph1[v1][v2]=wt;// adjancey matrix
        graph1[v2][v1]=wt;
        
        graph2[v1].push_back({v2,wt}); // adjacency list 
        graph2[v2].push_back({v1 , wt});
        
     }
    return 0;
 }