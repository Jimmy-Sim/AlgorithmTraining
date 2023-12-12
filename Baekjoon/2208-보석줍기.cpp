#include <iostream>

using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, M;
	cin >> N >> M;
    
    int values[100005], cnt[100005], dp[100005] = {};
	for (int i = 1; i <= N; i++) {
		cin >> values[i];
		cnt[i] = cnt[i - 1] + values[i];
	}

	dp[M] = cnt[M];
	for (int i = M + 1; i <= N; i++) dp[i] = max(dp[i - 1] + values[i], cnt[i] - cnt[i - M]);

    int maxValue = 0;
    for (int i = 1; i <= N; i++) maxValue = max(maxValue, dp[i]);
    
	cout << max(0, maxValue) << '\n';

	return 0;
}
