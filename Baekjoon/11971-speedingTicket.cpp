#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N, M;
    cin >> N >> M;
    
    int road[5][105], x = 0;
    for (int i = 0; i < N; i++) {
        int roadLength, speedLimit;
        cin >> roadLength >> speedLimit;

        for (int j = x; j < x + roadLength; j++) {
            road[0][j] = speedLimit;
        }

        x += roadLength;
    }

    int y = 0;
    for (int i = 0; i < M; i++) {
        int roadLength, speedLimit;
        cin >> roadLength >> speedLimit;

        for (int j = y; j < y + roadLength; j++) {
            road[1][j] = speedLimit;
        }

        y += roadLength;
    }

    int maxExceed = 0;
    for (int i = 0; i < 100; i++) {
        int exceed = road[1][i] - road[0][i];
        maxExceed = exceed > maxExceed ? exceed : maxExceed;
    }

    cout << maxExceed << "\n";

    return 0;
}