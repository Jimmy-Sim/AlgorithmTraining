#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, Q, P;
    cin >> N >> Q >> P;

    int cows[N + 5][Q + 5];
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= Q; j++) {
            int response;
            cin >> response;

            cows[i][j] = response;
        }
    }

    pair<int, int> criteria[15];
    for (int i = 1; i <= P; i++) {
        int question, answer;
        cin >> question >> answer;

        criteria[i].first = question, criteria[i].second = answer;
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        bool met = true;
        for (int j = 1; j <= P; j++) {
            int question = criteria[j].first, answer = criteria[j].second;
            if (cows[i][question] != answer) {
                met = false;
                break;
            }
        }

        if (met) cnt++;
    }

    cout << cnt << '\n';
    
    return 0;
}
