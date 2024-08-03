#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N;
    cin >> N;

    int cows[1005];
    for (int i = 0; i < N; i++) cin >> cows[i];

    int mult[1005];
    for (int i = 0; i < N; i++) mult[i] = i;

    int minSum;
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) sum += cows[j] * mult[j];

        for (int j = N - 1; j >= 0; j--) mult[j + 1] = mult[j];
        mult[0] = mult[N];

        if (i == 0) minSum = sum;

        minSum = min(sum, minSum);
    }

    cout << minSum << '\n';
    
    return 0;
}
