#include <iostream>

using namespace std;

int N, M;
int arr1[105][105], arr2[105][105];

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> arr1[i][j];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cin >> arr2[i][j];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) cout << arr1[i][j] + arr2[i][j] << " ";
        cout << "\n";
    }

    return 0;
}