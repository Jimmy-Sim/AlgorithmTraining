#include <bits/stdc++.h>

using namespace std;

int main()
{
    int M, N, K;
    cin >> M >> N >> K;

    char signal[15][15];
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) cin >> signal[i][j];
    }

    char enlarged[105][105];
    for (int i = 0; i < M * K; i++) {
        for (int j = 0; j < N * K; j++) enlarged[i][j] = signal[i / K][j / K];
    }

    for (int i = 0; i < M * K; i++) {
        for (int j = 0; j < N * K; j++) cout << enlarged[i][j];
        cout << '\n';
    }
    
    return 0;
}
