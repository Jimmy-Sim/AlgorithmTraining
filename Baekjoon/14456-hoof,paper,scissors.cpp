#include <iostream>

using namespace std;

const int MAX = 105;

int N, games[MAX][5];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> games[i][1] >> games[i][2];
    }

    int maxCow1Points = 0;
    for (int i = 1; i <= 3; i++) { // Hoof
        for (int j = 1; j <= 3; j++) { // Paper
            if (j == i) continue;
            for (int k = 1; k <= 3; k++) { // Scissors
                if (k == j) continue;

                int cow1Points = 0;

                for (int l = 1; l <= N; l++) {
                    int cow1 = games[l][1], cow2 = games[l][2];

                    if (cow1 == cow2) continue;
                    else if (cow1 == i) {
                        if (cow2 == k) cow1Points++;
                    }
                    else if (cow1 == j) {
                        if (cow2 == i) cow1Points++;
                    }
                    else {
                        if (cow2 == j) cow1Points++;
                    }
                }

                maxCow1Points = cow1Points > maxCow1Points ? cow1Points : maxCow1Points;
            }
        }
    }

    cout << maxCow1Points << "\n";

    return 0;
}