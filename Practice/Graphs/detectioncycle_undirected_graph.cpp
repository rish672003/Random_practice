
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool detect(int src, vector<vector<int>> &adj, vector<int> &vis) {
        vis[src] = 1;
        queue<pair<int,int>> q;
        q.push({src, -1});

        while (!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (auto adjacentNode : adj[node]) {
                if (!vis[adjacentNode]) {
                    vis[adjacentNode] = 1;
                    q.push({adjacentNode, node});
                }
                else if (adjacentNode != parent) {
                    return true; // Found a back-edge → cycle
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int V, vector<pair<int,int>> &edges) {
        // Step 1: Build adjacency list from edge list
        vector<vector<int>> adj(V);
        for (auto &e : edges) {
            int u = e.first - 1; // converting to 0-index
            int v = e.second - 1;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Step 2: Cycle detection
        vector<int> vis(V, 0);
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (detect(i, adj, vis)) return true;
            }
        }
        return false;
    }
};

int main() {
    int V, E;
    cin >> V >> E;
    vector<pair<int,int>> edges(E);
    for (int i = 0; i < E; i++) {
        cin >> edges[i].first >> edges[i].second;
    }

    Solution obj;
    cout << (obj.isCycle(V, edges) ? "true" : "false") << endl;
}
