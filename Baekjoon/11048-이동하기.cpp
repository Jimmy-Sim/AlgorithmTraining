#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int N, M;
	cin >> N >> M;

    int maze[1005][1005];
	for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) cin >> maze[i][j];
	}

	int dp[1005][1005];
	for (int i = 1; i <= M; i++) dp[1][i] = dp[1][i - 1] + maze[1][i];


	for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= M; j++) dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + maze[i][j];
	}
    
    cout << dp[N][M] << '\n';
    
    return 0;
}
