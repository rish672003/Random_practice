#include<bits/stdc++.h>

using namespace std;

int main(){

    int v, m;
    cin >> v >> m;
    // Graph are restored at here using adjacency list
    // Using vector of vectors for adjacency list representation
    // m is the number of edges     
    // v is the number of vertices
    // Assuming vertices are numbered from 1 to v
    // Using 1-based indexing for vertices
    // Using vector of vectors for adjacency list representation
    vector<int> adj[m+1];

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // Assuming undirected graph
    }
    




    return 0;
}