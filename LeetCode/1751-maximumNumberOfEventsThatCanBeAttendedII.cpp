class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        sort(events.begin(), events.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        vector<vector<int>> dp = {{0, 0}}, dp2 = {{0, 0}};

        for (int i = 0; i < k; i++) {
            for (const auto& event : events) {
                int start = event[0], end = event[1], value = event[2];

                int j = bisect(dp, start) - 1;
                if (dp[j][1] + value > dp2.back()[1]) dp2.push_back({end, dp[j][1] + value});
            }

            dp.swap(dp2);
            dp2 = {{0, 0}};
        }

        return dp.back()[1];        
    }

private:
    int bisect(const vector<vector<int>>& arr, int target) {
        int low = 0, high = arr.size();
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid][0] < target) low = mid + 1;
            else high = mid;
        }

        return low;
    }
};
