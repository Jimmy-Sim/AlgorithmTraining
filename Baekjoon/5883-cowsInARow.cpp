#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;
    
    int line[1005];
    for (int i = 1; i <= N; i++) {
        cin >> line[i];
    }

    int overlapCheck[1000005] = {}, maxCount = 0;
    for (int i = 1; i <= N; i++) {
        int id = line[i];
        if (overlapCheck[id] > 0) continue;
        overlapCheck[id]++;

        int newLine[1005], x = 1;
        for (int j = 1; j <= N; j++) {
            if (line[j] != id) {
                newLine[x] = line[j];
                x++;
            }
        }

        if (N == 2) x++;

        int count = 1;
        for (int j = 2; j < x; j++) {
            if (newLine[j] == newLine[j - 1]) count++;
            else count = 1;
            maxCount = count > maxCount ? count : maxCount;
        }
    }

    cout << maxCount << "\n";

    return 0;
}