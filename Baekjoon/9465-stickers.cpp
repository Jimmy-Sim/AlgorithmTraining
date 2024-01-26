#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int T;
    cin >> T;
	
	while (T--) {
        int N;
        cin >> N;
		
        int dp[5][100005];
		for (int i = 0; i < 2; i++) {
			for (int j = 2; j <= N + 1; j++) cin >> dp[i][j];
        }
		
		for (int j = 2; j <= N + 1; j++) {
			dp[0][j] += max(dp[1][j - 1], dp[1][j - 2]);
			dp[1][j] += max(dp[0][j - 1], dp[0][j - 2]);
		}
		
		int ans = max(dp[0][N + 1], dp[1][N + 1]);
        
		cout << ans << '\n';
	}
	
	return 0;
}
