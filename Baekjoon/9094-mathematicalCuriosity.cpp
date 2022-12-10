#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    int intervals[N + 5][5];
    for (int i = 0; i < N; i++) cin >> intervals[i][0] >> intervals[i][1];

    for (int i = 0; i < N; i++) {
        int n = intervals[i][0], m = intervals[i][1];
        int cnt = 0;

        for (int j = 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if ((j*j + k*k + m) % (j * k) == 0) cnt++;
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}