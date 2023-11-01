#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, M;
    cin >> N >> M;
    
    int marbleColors[300005];
    for (int i = 0; i < M; i++) cin >> marbleColors[i];
    sort(&marbleColors[0], &marbleColors[M]);

    int ans;
    int low = 1, high = marbleColors[M - 1];
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        int cnt = 0;
        for (int i = 0; i < M; i++) {
            cnt += marbleColors[i] / mid;
            if (marbleColors[i] % mid != 0) cnt++;
        }

        if (cnt <= N) {
            high = mid - 1;
            ans = mid;
        }
        else low = mid + 1;
    }

    cout << ans << '\n';

    return 0;
}
