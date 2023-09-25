class Solution {
public:
    bool dfs(vector<vector<int>> &adj, int src, vector<bool> &vis, vector<bool> &recst) {
        vis[src] = true, recst[src] = true;
        
        for (auto x : adj[src]) {
            if (!vis[x] && dfs(adj, x, vis, recst)) return true;

            else if (recst[x]) return true;
        }

        recst[src] = false;

        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>> &graph) {
        int n = graph.size();

        vector<vector<int>> adj(n);
        for (int i = 0; i < graph.size(); i++) {
            for (int j = 0; j < graph[i].size(); j++) adj[i].push_back(graph[i][j]);
        }

        vector<bool> vis(n, false), recst(n, false);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) dfs(adj, i, vis, recst);
        }

        vector<int> ans;
        for (int i = 0; i < recst.size(); i++) {
            if (!recst[i]) ans.push_back(i);
        }

        return ans;
    }
};
