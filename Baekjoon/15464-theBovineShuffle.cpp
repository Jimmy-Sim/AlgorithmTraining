#include <iostream>

using namespace std;

const int MAX = 105;

int N, shuffles[MAX], cows[MAX], newCows[MAX];

void init()
{
    for (int i = 1; i <= N; i++) cows[i] = newCows[i];
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> shuffles[i];
    for (int i = 1; i <= N; i++) cin >> cows[i];

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= N; j++) {
            int index = j;
            for (int k = 1; k <= N; k++) {
                int shuffleIndex = shuffles[k];

                if (shuffleIndex == index) newCows[k] = cows[index];
            }
        }

        init();
    }

    for (int i = 1; i <= N; i++) cout << cows[i] << "\n";

    return 0;
}