#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int cows[405][5] = {};
    for (int i = 0; i < N; i++) cin >> cows[i][0] >> cows[i][1] >> cows[i][2];

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (sqrt((cows[i][0] - cows[j][0]) * (cows[i][0] - cows[j][0]) + (cows[i][1] - cows[j][1]) * (cows[i][1] - cows[j][1])) < (cows[i][2] + cows[j][2])) cows[i][3]++, cows[j][3]++;
        }
    }

    for (int i = 0; i < N; i++) cout << cows[i][3] << '\n';

    return 0;
}