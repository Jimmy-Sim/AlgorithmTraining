#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int alice[105], bob[105];
        for (int i = 0; i < n; i++) cin >> alice[i];
        for (int i = 0; i < n; i++) cin >> bob[i];

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (alice[i] <= 2 * bob[i] && bob[i] <= 2 * alice[i]) cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}