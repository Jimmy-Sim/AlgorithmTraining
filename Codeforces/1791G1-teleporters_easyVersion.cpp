#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        int sortedCosts[1000000];
        for (int i = 1; i <= n; i++) {
            int cost;
            cin >> cost;

            sortedCosts[i - 1] = cost + i;
        }

        sort(&sortedCosts[0], &sortedCosts[n]);

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (sortedCosts[i] <= c) {
                c -= sortedCosts[i];
                count++;
            }
            else break;
        }

        cout << count << '\n';
    }

    return 0;
}