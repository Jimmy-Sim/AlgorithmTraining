#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int groups[100005];
    for (int i = 0; i < n; i++) cin >> groups[i];

    sort(&groups[0], &groups[n]);

    for (int i = 0; i < n - 1; i++) {
        if (groups[i] == 4 || groups[i] == 0) continue;
        for (int j = n - 1; j > i; j--) {
            if (groups[j] == 4 || groups[j] == 0) continue;

            if (groups[i] + groups[j] <= 4) {
                groups[j] = 0;
                break;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (groups[i] > 0) count++;
    }

    cout << count << '\n';

    return 0;
}