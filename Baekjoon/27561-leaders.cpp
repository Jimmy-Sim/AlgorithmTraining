#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    char line[100005];
    int gCnt = 0, hCnt = 0;
    for (int i = 1; i <= N; i++) {
        cin >> line[i];
        if (line[i] == 'G') gCnt++;
        else hCnt++;
    }
    int inclusion[100005];
    for (int i = 1; i <= N; i++) cin >> inclusion[i];

    bool leaderCheck[100005];
    int gLeaderCnt = 0, hLeaderCnt = 0;
    for (int i = N; i >= 1; i--) {
        int g = 0, h = 0;
        for (int j = i; j <= inclusion[i]; j++) {
            if (line[j] == 'G') g++;
            else h++;
        }
        if (line[i] == 'G' && g == gCnt) {
            leaderCheck[i] = true;
            gLeaderCnt++;
        }
        else if (line[i] == 'H' && h == hCnt) {
            leaderCheck[i] = true;
            hLeaderCnt++;
        }
    }

    for (int i = 1; i <= N - 1; i++) {
        for (int j = i; j <= inclusion[i]; j++) {
            if (leaderCheck[j] && line[j] != line[i]) {
                leaderCheck[i] = true;
                if (line[i] == 'G') gLeaderCnt++;
                else hLeaderCnt++;
                break;
            }
        }
    }

    cout << gLeaderCnt * hLeaderCnt << '\n';

    return 0;
}