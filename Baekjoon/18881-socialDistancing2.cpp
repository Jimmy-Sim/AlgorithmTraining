/*
#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 1005;

struct Cow {
    int position;
    bool infected;
};

bool cmp(Cow x, Cow y) {
    return x.position < y.position;
}

int N;
Cow cows[MAX];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;

    
    for (int i = 0; i < N; i++) cin >> cows[i].position >> cows[i].infected;

    sort(&cows[0], &cows[N], cmp);

    int distance, minDistance = 1000000;

    for (int i = 0; i < N; i++) {
        int leftDistance = 1000000, rightDistance = 1000000;

        int currentPosition = cows[i].position;
        bool currentlyInfected = cows[i].infected;

        int leftPosition = cows[i - 1].position;
        bool leftInfected = cows[i - 1].infected;

        int rightPosition = cows[i + 1].position;
        bool rightInfected = cows[i + 1].infected;

        if (currentlyInfected) {
            if (!leftInfected && i - 1 >= 0) leftDistance = currentPosition - leftPosition;
            if (!rightInfected && i + 1 < N) rightDistance = rightPosition - currentPosition;
        }

        distance = min(leftDistance, rightDistance);

        minDistance = distance < minDistance ? distance : minDistance;
    }

    int ans = 1;

    for (int i = 0; i < N; i++) {
        int currentPosition = cows[i].position;
        bool currentlyInfected = cows[i].infected;

        int rightPosition = cows[i + 1].position;
        bool rightInfected = cows[i + 1].infected;

        if (i == N - 1) {
            if (currentPosition >= cows[i - 1].position + minDistance) ans++;
        }
        else {
            if ((currentlyInfected && rightInfected) && rightPosition - currentPosition >= minDistance) ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}
*/

#include <iostream>

using namespace std;

int N;
bool inputPosition[1005], inputHealth[1005], cows[1000005];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        int position;
        bool isSick;

        cin >> position >> isSick;

        inputPosition[i] = position;
        inputHealth[i] = isSick;
        cows[position] = isSick;
    }

    int radius = 1000005;
    for (int i = 0; i < N; i++) {
        if (inputHealth[i]) {
            if (i == N - 1) {
                if (!inputHealth[i - 1]) {
                    int distance = inputPosition[i] - inputPosition[i - 1];
                    radius = distance < radius ? distance : radius;
                }
            }
            else {
                if (!inputHealth[i + 1]) {
                    int distance = inputPosition[i + 1] - inputPosition[i];
                    radius = distance < radius ? distance : radius;
                }
            }
        }

        cout << radius << " ";
    }

    cout << "\n";

    cout << radius << "\n";

    return 0;
}