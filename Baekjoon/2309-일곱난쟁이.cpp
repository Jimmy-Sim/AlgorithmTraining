#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int heights[10], sum = 0;
    for (int i = 1; i <= 9; i++) {
        cin >> heights[i];
        sum += heights[i];
    }

    int flag = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = i + 1; j <= 9; j++) {
            if (sum - heights[i] - heights[j] == 100) {
               heights[i] = -1, heights[j] = -1;
               flag = 1;
               break;
            }
        }
        if (flag == 1) {
            break;
        }
    }

    sort(&heights[1], &heights[10]);

    for (int i = 3; i <= 9; i++) {
        cout << heights[i] << "\n";
    }
}