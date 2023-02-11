#include <iostream>
#include <algorithm>

using namespace std;

int T;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> T;

    for (int i = 1; i <= T; i++) {
        int N, dice[100005];
        cin >> N;
        for (int j = 0; j < N; j++) cin >> dice[j];

        sort(&dice[0], &dice[N]);

        int count = 0, order = 1;
        for (int j = 0; j < N; j++) {
            int die = dice[j];
            if (die >= order) {
                count++;
                order++;
            }
        }

        cout << "Case #" << i << ": " << count << '\n';
    }

    return 0;
}