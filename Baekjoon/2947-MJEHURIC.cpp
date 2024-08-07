#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int pieces[10];
    for (int i = 1; i <= 5; i++) cin >> pieces[i];

    int idx = 1, cnt = 0;
    while (true) {
        if (pieces[idx] > pieces[idx + 1]) {
            swap(pieces[idx], pieces[idx + 1]);
            cnt++;
            for (int i = 1; i <= 5; i++) cout << pieces[i] << ' ';
            cout << '\n';
        }

        if (idx == 4) {
            if (cnt == 0) break;
            idx = 1, cnt = 0;
        }
        else idx++;
    }
    
    return 0;
}
