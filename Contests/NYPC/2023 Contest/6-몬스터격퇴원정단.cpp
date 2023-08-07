#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int monstersType[100000], monstersPower[100000], soldiersType[100000], soldiersPower[100000];
    for (int i = 0; i < N; i++) cin >> monstersType[i] >> monstersPower[i];
    for (int i = 0; i < M; i++) cin >> soldiersType[i] >> soldiersPower[i];

    for (int i = 0; i <= M - N; i++) {
        unordered_map<int, int> cnt;
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (soldiersType[i + j] != monstersType[k]) {
                    if (soldiersPower[i + j] >= monstersPower[k]) {
                        if (cnt.count(k) != 0) cnt[k]++;
                        else cnt[k] = 1;
                    }
                }
                else if (soldiersPower[i + j] / 2 >= monstersPower[k]) {
                    if (cnt.count(k) != 0) cnt[k]++;
                    else cnt[k] = 1;
                }
            }
        }

        for (auto num : cnt) {
            cout << num.first << ' ' << num.second << '\n';
        }

        // if (cnt.size() == N) cout << 1;
        // else cout << 0;
    }
    
    cout << '\n';

    return 0;
}
