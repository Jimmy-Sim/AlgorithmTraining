#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N;
    cin >> N;
    
    int dp[1005] = {1, 1};
    for (int i = 2; i <= N; i++) dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007;

    cout << dp[N];

    return 0;
}
