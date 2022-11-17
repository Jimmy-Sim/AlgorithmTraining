#include <iostream>

using namespace std;

const int MAX = 100005;

int N, Q;
int cows[MAX], queries[MAX][5], breedCount[MAX][5];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N >> Q;
    for (int i = 1; i <= N; i++) cin >> cows[i];
    for (int i = 1; i <= Q; i++) cin >> queries[i][1] >> queries[i][2];

    for (int i = 1; i <= N; i++) {
        if (cows[i] == 1) breedCount[i][1]++;
        else if (cows[i] == 2) breedCount[i][2]++;
        else breedCount[i][3]++;

        if (i > 0) {
            breedCount[i][1] += breedCount[i - 1][1];
            breedCount[i][2] += breedCount[i - 1][2];
            breedCount[i][3] += breedCount[i - 1][3];
        }
    }

    for (int i = 1; i <= Q; i++) {
        int intervalStart = queries[i][1], intervalEnd = queries[i][2];
        int currentHCount = breedCount[intervalEnd][1], currentGCount = breedCount[intervalEnd][2], currentJCount = breedCount[intervalEnd][3];
        int previousHCount = breedCount[intervalStart - 1][1], previousGCount = breedCount[intervalStart - 1][2], previousJCount = breedCount[intervalStart - 1][3];

        int hCount = currentHCount - previousHCount, gCount = currentGCount - previousGCount, jCount = currentJCount - previousJCount;

        cout << hCount << " " << gCount << " " << jCount << "\n";
    }

    return 0;
}