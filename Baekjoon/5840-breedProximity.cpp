#include <iostream>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int line[50005];
    for (int i = 0; i < N; i++) cin >> line[i];

    bool checked[1000005];
    int maxID = -1;
    for (int i = 0; i < N; i++) {
        if (!checked[line[i]]) {
            checked[line[i]] = true;
            for (int j = i + 1; j <= i + K; j++) {
                if (j >= N) break;
                if (line[j] == line[i]) {
                    maxID = line[i] > maxID ? line[i] : maxID;
                    break;
                }
            }
        }
    }

    cout << maxID << '\n';

    return 0;
}