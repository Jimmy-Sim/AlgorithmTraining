class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }
    
    int calc(int i, vector<vector<int>>& seg) {
        int l = 0, r = i - 1, req_l = seg[i][0], ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2, m_r = seg[mid][1];
            if (m_r <= req_l) {
                ans = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }

        return ans;
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& seg) {
        sort(seg.begin(), seg.end(), cmp);

        int n = seg.size();
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        
        for (int i = 1; i < n; i++) {
            int pre = calc(i, seg), left = i - pre - 1;
            if (pre != -1) dp[i] = min(dp[i], dp[pre] + left);
            dp[i] = min(dp[i], dp[i - 1] + 1);
        }

        return dp[n - 1];
    }
};
