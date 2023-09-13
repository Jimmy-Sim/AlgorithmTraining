class Solution {
    vector<vector<int>> dp;
    vector<int> di = {0, 0, -1, 1}, dj = {-1, 1, 0, 0};
    int mod = 1000000007;

public:
    int countPaths(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        dp = vector<vector<int>>(n, vector<int>(m));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) ans = (ans + dfs(grid, i, j, -1)) % mod;
        }
        
        return ans;
    }
    
    int dfs(vector<vector<int>>& grid, int i, int j, int prev) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] <= prev) return 0;

        if (dp[i][j] != 0) return dp[i][j];
        
        dp[i][j] = 1;
        for (int k = 0; k < 4; k++) {
            dp[i][j] += dfs(grid, i + di[k], j + dj[k], grid[i][j]);
            dp[i][j] %= mod;
        }

        return dp[i][j] % mod;
    }
};
