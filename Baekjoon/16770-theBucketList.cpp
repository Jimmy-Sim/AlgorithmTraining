#include <iostream>

using namespace std;

const int MAX = 1005;

int N;
int bucketAtTimes[MAX];
int ans;

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int startTime, endTime, quantity;
        cin >> startTime >> endTime >> quantity;

        for (int j = startTime; j <= endTime; j++) bucketAtTimes[j] += quantity;
    }

    for (int i = 1; i <= 1000; i++) ans = bucketAtTimes[i] > ans ? bucketAtTimes[i] : ans;

    cout << ans << "\n";

    return 0;
}