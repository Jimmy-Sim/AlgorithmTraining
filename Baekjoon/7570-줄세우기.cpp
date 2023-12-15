#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
	cin >> N;

    int dp[1000005] = {}, ans = 0;
	for (int i = 1; i <= N; i++) {
        int num;
		cin >> num;
        
		dp[num] = dp[num - 1] + 1;
		ans = max(ans, dp[num]);
	}
    
	cout << N - ans << '\n';
    
    return 0;
}
