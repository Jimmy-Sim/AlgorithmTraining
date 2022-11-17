#include <iostream>

using namespace std;

const int MAX = 2005;

int N;
int cows[MAX][5];
long long maxDistance = 40000000005, max1, max2;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 1; i <= N; i++) cin >> cows[i][1] >> cows[i][2];

    for (int i = 1; i <= N; i++) {
        int cow1x = cows[i][1], cow1y = cows[i][2];
        for (int j = 1; j <= N; j++) {
            if (j == i) continue;

            int cow2x = cows[j][1], cow2y = cows[j][2];
            long long simpleDistance = ((cow2x - cow1x) * (cow2x - cow1x)) + ((cow2y - cow1y) * (cow2y - cow1y));

            if (simpleDistance < maxDistance) {
                maxDistance = simpleDistance;
                
                max1 = i;
                max2 = j;
            }
        }
    }

    cout << min(max1, max2) << " " << max(max1, max2) << "\n";

    return 0;
}