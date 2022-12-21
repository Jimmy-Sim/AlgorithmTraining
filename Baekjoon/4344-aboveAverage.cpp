#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        int grades[1005], total = 0;
        for (int i = 0; i < N; i++) {
            cin >> grades[i];
            total += grades[i];
        }
        double avg = (double)total / N;

        int count = 0;
        for (int i = 0; i < N; i++) {
            if (grades[i] > avg) count++;
        }

        double percentage = 100 * (double(count) / N);

        printf("%.3f%\n", percentage);
    }

    return 0;
}