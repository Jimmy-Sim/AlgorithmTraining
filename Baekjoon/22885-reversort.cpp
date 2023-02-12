#include <bits/stdc++.h>

using namespace std;

int T;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> T;

    for (int i = 1; i <= T; i++) {
        int N, list[105];
        cin >> N;
        for (int j = 1; j <= N; j++) cin >> list[j];

        int cost = 0;
        for (int j = 1; j < N; j++) {
            int minNum = 100, minNumIndex;
            for (int k = j; k <= N; k++) {
                if (list[k] < minNum) {
                    minNum = list[k];
                    minNumIndex = k;
                }
            }

            vector<int> v;
            for (int k = minNumIndex; k >= j; k--) v.push_back(list[k]);
            for (int k = minNumIndex; k >= j; k--) {
                list[k] = v.back();
                v.pop_back();
            }

            cost += (minNumIndex - j + 1);
        }

        cout << "Case #" << i << ": " << cost << '\n';
    }

    return 0;
}