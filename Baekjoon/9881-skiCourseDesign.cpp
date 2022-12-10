#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1005;

int N;
int hills[MAX];
int ans = 10000000;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> hills[i];

    sort(&hills[0], &hills[N]);

    for (int i = 0; i <= 83; i++) {
        int low = i, high = i + 17;
        int costs[MAX] = {}, totalCost = 0;

        for (int j = 0; j < N; j++) {
            if (hills[j] < low) costs[j] = (low - hills[j]) * (low - hills[j]);
            else if (hills[j] > high) costs[j] = (hills[j] - high) * (hills[j] - high);

            totalCost += costs[j];
        }

        ans = totalCost < ans ? totalCost : ans;
    }

    cout << ans << "\n";

    return 0;
}