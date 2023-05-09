#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--) {
        int M;
        cin >> M;

        char box[M + 5][M + 5];
        for (int i = 0; i < M; i++) {
            box[0][i] = '#';
            box[i][0] = '#';
            box[M - 1][i] = '#';
            box[i][M - 1] = '#';
        }
        for (int i = 1; i < M - 1; i++) {
            for (int j = 1; j < M - 1; j++) box[i][j] = 'J';
        }

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < M; j++) cout << box[i][j];
            cout << '\n';
        }

        cout << '\n';
    }

    return 0;
}