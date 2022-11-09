#include <iostream>
#include <vector>

using namespace std;

int cows[15];
vector<int> teamLevels;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 0; i < 12; i++) cin >> cows[i];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (j == i) continue;
            for (int k = 0; k < 12; k++) {
                if (k == j) continue;

                int teamLevel = cows[i] + cows[j] + cows[k];
                teamLevels.push_back(teamLevel);
            }
        }
    }

    int minDiff = 12000000;
    for (int i = 0; i < teamLevels.size(); i++) {
        for (int j = 0; j < teamLevels.size(); j++) {
            if (j == i) continue;
            if (teamLevels[i] == teamLevels[j]) continue;

            int levelDiff = abs(teamLevels[i] - teamLevels[j]);
            if (levelDiff == 1) cout << teamLevels[i] << " " << teamLevels[j] << "\n";
            minDiff = levelDiff < minDiff ? levelDiff : minDiff;
        }
    }

    cout << minDiff << "\n";

    return 0;
}