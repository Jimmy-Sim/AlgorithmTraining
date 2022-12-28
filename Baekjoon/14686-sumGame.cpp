#include <iostream>

using namespace std;

const int MAX = 100005;

int N;
int swifts[MAX], semaphores[MAX];
int ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> swifts[i];
    for (int i = 1; i <= N; i++) cin >> semaphores[i];

    for (int i = 2; i <= N; i++) swifts[i] += swifts[i - 1];
    for (int i = 2; i <= N; i++) semaphores[i] += semaphores[i - 1];

    for (int i = 1; i <= N; i++) {
        if (swifts[i] == semaphores[i]) ans = i;
    }

    cout << ans << '\n';

    return 0;
}