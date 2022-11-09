#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    int checkpoints[100005][5]; // checkpoints[i][1]: x; checkpoints[i][2]: y;
    for (int i = 1; i <= N; i++) cin >> checkpoints[i][1] >> checkpoints[i][2];

    int totalDistance = 0;
    for (int i = 2; i <= N; i++) totalDistance += abs(checkpoints[i][1] - checkpoints[i - 1][1]) + abs(checkpoints[i][2] - checkpoints[i - 1][2]);

    int minDistance = 0;
    for (int i = 2; i < N; i++) {
        int substractingDistance = (abs(checkpoints[i][1] - checkpoints[i - 1][1]) + abs(checkpoints[i][2] - checkpoints[i - 1][2])) + (abs(checkpoints[i][1] - checkpoints[i + 1][1]) + abs(checkpoints[i][2] - checkpoints[i + 1][2]));
        int skippedDistance = abs(checkpoints[i + 1][1] - checkpoints[i - 1][1]) + abs(checkpoints[i + 1][2] - checkpoints[i - 1][2]);
        int newDistance = totalDistance - substractingDistance + skippedDistance;
        if (i == 2) minDistance = newDistance;
        else minDistance = newDistance < minDistance ? newDistance : minDistance;
    }

    cout << minDistance << "\n";

    return 0;
}