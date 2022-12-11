#include <iostream>

using namespace std;

int N;
int cowPositions[1005][5];

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cowPositions[i][1] = i;
        cin >> cowPositions[i][2] >> cowPositions[i][3];
    }

    for (int i = 1; i <= N; i++) {
        int x1 = cowPositions[i][2], y1 = cowPositions[i][3];
        int minDistance = 20000, minIndex;

        if (cowPositions[i][1] != 0) {
            for (int j = 1; j <= N; j++) {
                if (j == i) continue;

                int x2 = cowPositions[j][2], y2 = cowPositions[j][3];
                int distance = abs(x2 - x1) + abs(y2 - y1);

                if (cowPositions[j][1] != 0) {
                    if (distance < minDistance) {
                        minDistance = distance;
                        minIndex = j;
                    }
                }
            }

            cowPositions[minIndex][1] = 0;
        }
    }

    for (int i = 1; i <= N; i++) {
        if (cowPositions[i][1] != 0) {
            cout << cowPositions[i][1] << '\n';

            break;
        }
    }

    return 0;
}