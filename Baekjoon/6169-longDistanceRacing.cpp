#include <iostream>

using namespace std;

const int MAX = 100005;

int M, T, U, F, D;
char path[MAX];
int seconds;
int ans;

int main()
{
    cin >> M >> T >> U >> F >> D;
    for (int i = 0; i < T; i++) cin >> path[i];

    for (int i = 0; i < T; i++) {
        int portion = path[i];

        if (portion == 'u') seconds += (U + D);
        else if (portion == 'd') seconds += (D + U);
        else seconds += 2 * F;

        if (seconds > M) break;
        else ans++;
    }

    cout << ans << '\n';

    return 0;
}