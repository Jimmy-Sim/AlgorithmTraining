#include <iostream>

using namespace std;

const int MAX = 105;

int N;
int flowers[MAX];
int ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> flowers[i];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i; j++) {
            double sum = 0;
            double avg;
            for (int k = j; k <= j + i; k++) {
                sum += flowers[k];
            }
            avg = sum / (i + 1);

            for (int k = j; k <= j + i; k++) {
                if (flowers[k] == avg) {
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}