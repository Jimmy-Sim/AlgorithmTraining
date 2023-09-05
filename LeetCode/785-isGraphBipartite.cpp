class Solution {
public:
    bool flag = false;

    void dfs(int ind, vector<vector<int>>& graph, vector<int>& color, int currcolor) {
        color[ind] = currcolor;

        for (auto it : graph[ind]) {
            if (color[it] == 0) dfs(it, graph, color, currcolor*(-1));

            else if (color[it] == currcolor) {
                flag = true;

                return;
            }
        }
    }

    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        
        vector<int> color(n, 0);

        for (int i = 0; i < graph.size(); i++) {
            if (color[i] == 0) dfs(i, graph, color, 1);

            if (flag) return false;
        }

        return true;
    }
};
