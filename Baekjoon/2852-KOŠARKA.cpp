#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    int scorers[105], times[105];
    for (int i = 0; i < N; i++) {
        int team;
        string time;
        cin >> team >> time;

        scorers[i] = team;
        times[i] = 60 * (10 * (time[0] - 48) + time[1] - 48) + (10 * (time[3] - 48)) + (time[4] - 48);
    }
    times[N] = 2880; // 60 * 48 min.
    
    int score1 = 0, score2 = 0;
    int team1Time = 0, team2Time = 0;
    for (int i = 0; i < N; i++) {
        if (scorers[i] == 1) score1++;
        else score2++;

        int gap = times[i + 1] - times[i];
        if (score1 > score2) team1Time += gap;
        else if (score1 < score2) team2Time += gap;
    }

    char ans1[5], ans2[5];
    ans1[0] = ((team1Time / 60) / 10) + 48, ans1[1] = ((team1Time / 60) % 10) + 48, ans1[2] = ':', ans1[3] = ((team1Time % 60) / 10) + 48, ans1[4] = ((team1Time % 60) % 10) + 48;
    ans2[0] = ((team2Time / 60) / 10) + 48, ans2[1] = ((team2Time / 60) % 10) + 48, ans2[2] = ':', ans2[3] = ((team2Time % 60) / 10) + 48, ans2[4] = ((team2Time % 60) % 10) + 48;

    for (int i = 0; i < 5; i++) cout << ans1[i];
    cout << '\n';
    for (int i = 0; i < 5; i++) cout << ans2[i];
    cout << '\n';
    
    return 0;
}
