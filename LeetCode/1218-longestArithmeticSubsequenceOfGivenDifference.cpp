class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        map<int, int> m;
        int n = arr.size();
        vector<int> dp(n);

        for (int x = 0; x < n; x++) {
            int num = arr[x] - difference, a = 0;
            if (m.find(num) != m.end()) a = dp[m[num]];

            dp[x] = 1 + a;
            m[arr[x]] = x;
        }
        
        int ans = *max_element(dp.begin(), dp.end());

        return ans;
    }
};
