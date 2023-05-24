#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N;
    cin >> N;

    long long limits[100005];
    for (int i = 0; i < N; i++) cin >> limits[i];
    sort(&limits[0], &limits[N]);

    long long maxProfit = 0, optimalTuition = 0;
    int cnt = N;
    for (int i = 0; i < N; i++) {
        long long profit = cnt * limits[i];
        if (profit > maxProfit) {
            maxProfit = profit;
            optimalTuition = limits[i];
        }

        cnt--;
    }

    cout << maxProfit << ' ' << optimalTuition << '\n';

    return 0;
}