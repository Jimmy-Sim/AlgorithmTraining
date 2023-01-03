#include <iostream>

using namespace std;

int N, M, D, S;
int milkTypes[55][55], drinkTimes[55][55], sickTimes[55];
int ans;

int main()
{
    cin >> N >> M >> D >> S;
    for (int i = 0; i < D; i++) {
        int person, milkType, time;
        cin >> person >> milkType >> time;

        milkTypes[milkType][person]++;
        if (drinkTimes[milkType][person] > 0 && time < drinkTimes[milkType][person]) drinkTimes[milkType][person] = time;
        else drinkTimes[milkType][person] = time;
    }
    for (int i = 0; i < S; i++) {
        int person, sickTime;
        cin >> person >> sickTime;

        sickTimes[person] = sickTime;
    }

    for (int i = 1; i <= M; i++) {
        int count = 0;

        for (int j = 1; j <= N; j++) {
            int milkType = milkTypes[i][j], drinkTime = drinkTimes[i][j], sickTime = sickTimes[j];
            // cout << milkType << ' '  << drinkTime << ' ' << sickTime << "       ";
            if (milkType > 0) {
                if (sickTimes[j] == 0) count++;
                else if (drinkTime < sickTime) count++;
            }
        }

        // cout << '\n';

        ans = count > ans ? count : ans;
    }

    cout << ans << '\n';

    return 0;
}