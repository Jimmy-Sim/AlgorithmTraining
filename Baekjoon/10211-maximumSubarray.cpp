#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;

        int arr[1005];
        for (int j = 1; j <= M; j++) {
            cin >> arr[j];
        }

        int maxSum = 0;
        for (int j = 1; j <= M; j++) {
            int x = j, sum = 0;
            while (sum >= 0) {
                if (sum + arr[x] < 0) {
                    cout << arr[x] << "\n";
                    break;
                }
                sum += arr[x];
                x++;
            }
            maxSum = sum > maxSum ? sum : maxSum;
        }

        cout << maxSum << "\n";
    }

    return 0;
}