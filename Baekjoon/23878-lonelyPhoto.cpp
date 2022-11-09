#include <iostream>

using namespace std;

const int MAX = 500005;

int N;
char line[MAX];
int limit = 3, x;
int ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> line[i];

    /*while (limit <= N) {
        for (int i = 0; i <= N - limit; i++) {
            int gCount = 0, hCount = 0;

            for (int j = i; j < i + limit; j++) {
                if (line[j] == 'G') gCount++;
                else hCount++;
            }

            if (gCount == 1 || hCount == 1) ans++;
        }

        limit++;
    }*/

    for (int i = 0; i <= N - 3; i++) {
        int gCount = 0, hCount = 0;

        for (int j = i; j < i + 3; j++) {
            if (line[j] == 'G') gCount++;
            else hCount++;
        }

        for (int j = i + 3; j <= N; j++) {
            if (gCount == 1 || hCount == 1) {
                ans++;

                if (line[j] == 'G') gCount++;
                else hCount++;
            }
            else break;
        }
    }

    cout << ans << "\n";

    return 0;
}