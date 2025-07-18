#include<bits/stdc++.h>
using namespace std;




class Solution { 

    private: 

    void dfs(int node, int vist[], vector<int> &ans, vector<int> adj[]) {
        vist[node] = 1; // Mark the current node as visited
        ans.push_back(node); // Add the current node to the result  
        for (auto it : adj[node]) { // Iterate through all adjacent nodes
            if (!vist[it]) { // If the adjacent node is not visited
                dfs(it, vist, ans, adj); // Recursively call dfs for the adjacent node
            }

        }
    }
 public:

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vist[V] = {0};
        vector<int> ans;
        int start = 0; // Starting from vertex 0
        dfs(start, vist, ans, adj);
        return ans;
    }
};

int main() {
    int V = 5;
    vector<int> adj[V];

    // Example edges (undirected)
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[2].push_back(0);
    adj[3].push_back(1);
    adj[3].push_back(4);
    adj[4].push_back(3);

    Solution obj;
    vector<int> result = obj.dfsOfGraph(V, adj);

    cout << "DFS Traversal: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}