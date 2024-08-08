#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    int J;
    cin >> J;

    int left = 1, right = M, cnt = 0;
    for (int i = 0; i < J; i++) {
        int pos;
        cin >> pos;

        if (pos < left) {
            int diff = left - pos;
            left -= diff, right -= diff;
            cnt += diff;
        }
        else if (pos > right) {
            int diff = pos - right;
            left += diff, right += diff;
            cnt += diff;
        }
    }

    cout << cnt << '\n';
    
    return 0;
}
