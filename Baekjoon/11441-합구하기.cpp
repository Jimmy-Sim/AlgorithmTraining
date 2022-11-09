#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    int arr[100005] = {};
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    int M;
    cin >> M;
    for (int i = 1; i <= M; i++) {
        int startIndex, endIndex;
        cin >> startIndex >> endIndex;

        int sum = arr[endIndex] - arr[startIndex - 1];
        cout << sum << "\n";
    }

    return 0;
}