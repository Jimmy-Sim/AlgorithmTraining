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

    int minDistance = 1000000;

    for (int i = 0; i < N; i++) {
        bool currentlyInfected = cows[i].infected;
        if (!currentlyInfected) {
            int currentPosition = cows[i].position;

            int leftPosition = cows[i - 1].position;
            bool leftInfected = cows[i - 1].infected;

            int rightPosition = cows[i + 1].position;
            bool rightInfected = cows[i + 1].infected;

            int distance, leftDistance = 1000000, rightDistance = 1000000;

            if (i == 0) {
                if (rightInfected) {
                    rightDistance = rightPosition - currentPosition - 1;
                }
            }
            else if (i == N - 1) {
                if (leftInfected) {
                    leftDistance = currentPosition - leftPosition - 1;
                }
            }
            else {
                if (rightInfected) {
                    rightDistance = rightPosition - currentPosition - 1;
                }
                if (leftInfected) {
                    leftDistance = currentPosition - leftPosition - 1;
                }
            }

            distance = min(rightDistance, leftDistance);

            minDistance = distance < minDistance ? distance : minDistance;
        }
    }

    int ans = 0;

    for (int i = 0; i < N; i++) {
        int currentPosition = cows[i].position;
        bool currentlyInfected = cows[i].infected;

        int nextPosition = cows[i + 1].position;
        bool nextlyInfected = cows[i + 1].infected;

        int previousPosition = cows[i - 1].position;
        bool previouslyInfected = cows[i - 1].infected;

        if (currentlyInfected) {
            if (i == 0) {
                if (!nextlyInfected || nextPosition <= currentPosition + minDistance) {
                    ans++;
                    // cout << "1st index: " << currentPosition << " " << currentlyInfected << "\n";
                }
            }
            else if (i == N - 1) {
                if (!previouslyInfected || currentPosition > previousPosition + minDistance) {
                    ans++;
                    // cout << "Last index: " << currentPosition << " " << currentlyInfected << "\n";
                }
            }
            else {
                if ((!previouslyInfected || currentPosition > previousPosition + minDistance) && (!nextlyInfected || nextPosition <= currentPosition + minDistance)) {
                    ans++;
                    // cout << "Middle index: " << currentPosition << " " << currentlyInfected << "\n";
                }
            }
        }
    }

    //cout << minDistance << " " << ans << "\n";

    cout << ans << "\n";

    return 0;
}