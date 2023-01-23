#include <iostream>

using namespace std;

const int MAX = 100005;

int N, M;
int arr[1050][1050], queries[MAX][5];

int main()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) cin >> arr[i][j];
    }
    for (int i = 0; i < M; i++) cin >> queries[i][0] >> queries[i][1] >> queries[i][2] >> queries[i][3];

    for (int i = 1; i <= N; i++) {
        for (int j = 2; j <= N; j++) arr[i][j] += arr[i][j - 1];
    }

    for (int i = 0; i < M; i++) {
        int sum = 0;

        int x1 = queries[i][0], y1 = queries[i][1];
        int x2 = queries[i][2], y2 = queries[i][3];

        for (int j = x1; j <= x2; j++) {
            sum += arr[j][y2];
            sum -= arr[j][y1 - 1];
        }

        cout << sum << '\n';
    }

    return 0;
}