#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N;
    cin >> N;

    int cows[15], ans = 0;
    for (int i = 1; i <= 10; i++) cows[i] = -1;
    for (int i = 0; i < N; i++) {
        int cow, side;
        cin >> cow >> side;

        if (cows[cow] == -1) cows[cow] = side;
        else if (cows[cow] != side) {
            cows[cow] = side;
            ans++;
        }
    }

    cout << ans << '\n';
    
    return 0;
}
