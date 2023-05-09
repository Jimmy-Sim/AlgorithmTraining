#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int shifts[105][5]; // shifts[index][0]: shift start time; shifts[index][1]: shift end time
    int timetable[1005] = {}; // initialize all timetable to 0 first (done by the {})
    for (int i = 0; i < n; i++) {
        cin >> shifts[i][0] >> shifts[i][1];

        for (int j = shifts[i][0]; j < shifts[i][1]; j++) {
            timetable[j]++;
        }
    }

    int maxTimeCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = shifts[i][0]; j < shifts[i][1]; j++) {
            timetable[j]--;
        }
        int timeCount = 0;
        for (int j = 0; j <= 1000; j++) {
            if (timetable[j] >= 1) {
                timeCount++;
            }
        }

        if (timeCount > maxTimeCount) {
            maxTimeCount = timeCount;
        }

        for (int j = shifts[i][0]; j < shifts[i][1]; j++) {
            timetable[j]++;
        }
    }

    cout << maxTimeCount << '\n';

    return 0;
}