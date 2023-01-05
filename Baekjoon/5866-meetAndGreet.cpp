#include <iostream>

using namespace std;

const int MAX = 1000005;

int B, E;
int positionUpdates[MAX][5];

int main()
{
    cin >> B >> E;

    int bX = 1;
    for (int i = 0; i < B; i++) {
        int time;
        char direction;
        cin >> time >> direction;

        for (int j = bX; j <= bX + time; j++) {
            if (direction == 'L') positionUpdates[j][1] = positionUpdates[j - 1][1] - 1;
            else positionUpdates[j][1] = positionUpdates[j - 1][1] + 1;
        }

        bX += time;
    }
    int bY = 1;
    for (int i = 0; i < E; i++) {
        int time;
        char direction;
        cin >> time >> direction;

        for (int j = bY; j <= bY + time; j++) {
            if (direction == 'L') positionUpdates[j][2] = positionUpdates[j - 1][2] - 1;
            else positionUpdates[j][2] = positionUpdates[j - 1][2] + 1;
        }

        bY += time;
    }

    if (bX > bY) {
        for (int i = bY + 1; i <= bX; i++) positionUpdates[i][2] = positionUpdates[i - 1][2];
    }
    else if (bX < bY) {
        for (int i = bX + 1; i <= bY; i++) positionUpdates[i][1] = positionUpdates[i - 1][1];
    }

    for (int i = 0; i < 20; i++) {
        cout << positionUpdates[i][1] << ' ' << positionUpdates[i][2] << '\n';
    }

    cout << positionUpdates[13][1] << ' ' << positionUpdates[13][2] << '\n';

    return 0;
}