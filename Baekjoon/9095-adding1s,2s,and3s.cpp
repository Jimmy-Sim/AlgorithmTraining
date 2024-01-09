#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int T;
    cin >> T;
    
    int dp[11] = {1, 2, 4};
    for (int i = 3; i < 11; i++) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

    while (T--) {
        int num;
        cin >> num;

        cout << dp[num - 1] << '\n';
    }

    return 0;
}
