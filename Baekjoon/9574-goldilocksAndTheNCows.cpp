#include <iostream>

using namespace std;

const int MAX = 20005;

int N, X, Y, Z;
int tempRanges[MAX][5];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N >> X >> Y >> Z;

    int minLow = 1000000001, maxHigh = 0;
    for (int i = 1; i <= N; i++) {
        cin >> tempRanges[i][1] >> tempRanges[i][2];

        minLow = tempRanges[i][1] < minLow ? tempRanges[i][1] : minLow;
        maxHigh = tempRanges[i][2] > maxHigh ? tempRanges[i][2] : maxHigh;
    }

    // Brute force (probably exceeds time limit):
    int maxMilk = 0;
    for (int i = minLow; i <= maxHigh; i++) {
        int milk = 0;
        for (int j = 1; j <= N; j++) {
            int low = tempRanges[j][1], high = tempRanges[j][2];

            if (i < low) milk += X;
            else if (i > high) milk += Z;
            else milk += Y;
        }

        maxMilk = milk > maxMilk ? milk : maxMilk;
    }

    cout << maxMilk << "\n";

    return 0;
}