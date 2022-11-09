#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int x, y;
    cin >> x >> y;

    int N;
    cin >> N;

    int minDistance = 200, minDistanceX, minDistanceY;
    for (int i = 0; i < N; i++) {
        int taxiX, taxiY;
        cin >> taxiX >> taxiY;

        int distance = abs(x - taxiX) + abs(y - taxiY);

        if (distance < minDistance) {
            minDistance = distance;
            minDistanceX = taxiX;
            minDistanceY = taxiY;
        }
    }

    cout << minDistanceX << " " << minDistanceY << "\n";

    return 0;
}