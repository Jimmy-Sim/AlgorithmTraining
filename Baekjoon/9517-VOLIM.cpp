#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int K, N;
    cin >> K >> N;

    pair<int, int> history[105];
    int totalTime = 0, curPlayer = K;
    
    for (int i = 0; i < N; i++) {
        int time;
        char answer;
        cin >> time >> answer;

        totalTime += time;
        if (answer == 'T') {
            if (curPlayer == 8) curPlayer = 1;
            else curPlayer++;
        }

        history[i].first = totalTime, history[i].second = curPlayer;
    }

    for (int i = 0; i < N; i++) {
        if (history[i].first > 210) {
            cout << history[i - 1].second << '\n';
            break;
        }
        else if (history[i].first == 210) {
            cout << history[i].second << '\n';
            break;
        }
    }
    
    return 0;
}
