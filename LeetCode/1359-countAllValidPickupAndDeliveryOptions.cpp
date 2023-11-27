class Solution {
public:
    const int MOD = 1e9 + 7;
    vector<long long> dp;

    int countOrders(int numberOfPairs) {
        dp.resize(numberOfPairs + 1);

        dp[0] = 1;

        for (int i = 1; i <= numberOfPairs; i++) dp[i] = dp[i - 1] * (2 * i - 1) * i % MOD;

        return dp[numberOfPairs];
    }
};
