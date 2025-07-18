#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> bfsOfGraph(int V, vector<int> adj[]) {
      int n = adj->size();

        int vis[n] = {0};
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        vector<int> vt;

        while(q.empty()){
          int node = q.front();
          q.pop();
          vt.push_back(node);

          for(auto it: adj[node]){
            if(!vis[it]){
              vis[it] = 1;
              q.push(it);
            }
          }
        }

        return vt;
        
    }
};

int main() {
    int V = 5;
    vector<int> adj[V];

    // Sample graph
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    Solution obj;
    vector<int> res = obj.bfsOfGraph(V, adj);

    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

