#include <iostream>

using namespace std;

const int MAX = 200005;

int N;
string map[MAX][5]; // map[i][0]: CITY; map[i][1]: STATE
int ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> map[i][0] >> map[i][1];

    for (int i = 0; i < N; i++) {
        string city1 = map[i][0], city1Init = "", state1 = map[i][1];
        city1Init += city1[0];
        city1Init += city1[1];

        // cout << city1Init << "\n";

        for (int j = 0; j < N; j++) {
            if (j == i) continue;

            string city2 = map[j][0] + map[j][1], city2Init = "", state2 = map[j][1];
            city2Init += city2[0];
            city2Init += city2[1];

            if (state1 != state2) {
                if (city1Init == state2 && state1 == city2Init) {
                    ans++;
                    cout << city1Init << " " << state1 << "\n";
                    cout << city2Init << " " << state2 << "\n";
                }
            }
        }
    }

    ans /= 2;

    cout << ans << "\n";

    return 0;
}