#include <iostream>

using namespace std;

int T, N;
int matrix[10][10];

int main()
{
    cin >> T;

    for (int i = 1; i <= T; i++) {
        cin >> N;

        int numbers[1005] = {}, numberCount = 0;

        for (int j = 1; j <= N * N; j++) {
            for (int k = 1; k <= N * N; k++) {
                cin >> matrix[j][k];

                if (numbers[matrix[j][k]] == 0) numberCount++;
                numbers[matrix[j][k]]++;
            }
        }

        if (numberCount != N * N) {
            cout << "Case #" << i << ": No\n";

            continue;
        }
        
        bool invalid = false;

        for (int j = 1; j <= N * N; j++) {
            int verticalCheck[1005] = {}, horizontalCheck[1005] = {};
            for (int k = 1; k <= N * N; k++) {
                int verticalDigit = matrix[j][k], horizontalDigit = matrix[k][j];

                verticalCheck[verticalDigit]++, horizontalCheck[horizontalDigit]++;
            }

            for (int j = 1; j < 1000; j++) {
                if (verticalCheck[j] != 1) invalid = true;
                if (horizontalCheck[j] != 1) invalid = true;
            }

            if (invalid) {
                cout << "Case #" << i << " No\n";

                break;
            }
        }

        if (invalid) continue;

        for (int j = 1; j <= N * N; j += 3) {
            for (int k = 1; k <= N * N; k += 3) {
                int check[1005] = {};

                for (int l = j; l < j + N; l++) {
                    for (int m = k; m < k + N; m++) {
                        int digit = matrix[l][m];

                        check[digit]++;
                    }
                }

                for (int l = 1; l < 1000; l++) {
                    if (check[l] != 1) invalid = true;
                }

                if (invalid) {
                    cout << "Case #" << i << " No\n";

                    break;
                }
            }

            if (invalid) break;
        }

        if (invalid) continue;

        cout << "Case #" << i << ": Yes\n";
    }

    return 0;
}