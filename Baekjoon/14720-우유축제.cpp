#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int markets[1005], idx = -1;
    for (int i = 0; i < N; i++) {
        cin >> markets[i];
        if (markets[i] == 0 && idx < 0) idx = i;
    }

    int ans = 1, prevMilk = 0;
    for (int i = idx + 1; i < N; i++) {
        if (prevMilk == 0 && markets[i] == 1) {
            ans++;
            prevMilk = 1;
        }
        else if (prevMilk == 1 && markets[i] == 2) {
            ans++;
            prevMilk = 2;
        }
        else if (prevMilk == 2 && markets[i] == 0) {
            ans++;
            prevMilk = 0;
        }
    }

    cout << ans << '\n';
    
    return 0;
}
