#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    cin>> n >> k;
    //graph are restored at here 
    int adj[n + 1][k + 1];

    for(int i=0; i = k ; i++){

            int u, v;
            cin >> u >> v;
            adj[u][v] = 1; 
            adj[v][u] = 1; // Assuming undirected graph


    }

    return 0;
}
