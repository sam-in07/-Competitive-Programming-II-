#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, const vector<vector<int>>& adj, vector<bool>& visited) {
    stack<int> s;
    s.push(node);
    visited[node] = true;

    while (!s.empty()) {
        int u = s.top();
        s.pop();


        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                s.push(v);
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;


    vector<vector<int>> adj(n + 1);



    for (int i = 0; i < e; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n + 1, false);
    int components = 0;


    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {

            dfs(i, adj, visited);
            components++;
        }
    }

    cout << components << endl;

    return 0;
}
