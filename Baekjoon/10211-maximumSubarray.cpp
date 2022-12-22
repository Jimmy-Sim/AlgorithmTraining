#include <iostream>

using namespace std;

const int MAX = 1005;

int T, N;
int arr[MAX], prefSum[MAX];

int main()
{
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
            prefSum[j] = arr[j];
        }
        for (int j = 1; j < N; j++) prefSum[j] += prefSum[j - 1];

        int maxSum = 0;
        for (int j = 0; j < N; j++) maxSum = prefSum[j] > maxSum ? prefSum[j] : maxSum;

        cout << maxSum << "\n";
    }

    return 0;
}