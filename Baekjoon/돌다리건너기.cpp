#include <iostream>

using namespace std;

const int MAX = 2005;

int N, K = 1;
int stones[MAX];
bool DP[MAX][MAX];
int dx[] = {0, -3, 2, 1};
int values[100005];
int maxIndex;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> stones[i];

        values[stones[i]] = i;
    }

    DP[1][0] = true;

    for (int i = 2; i < N; i++) {
        int rightStone = stones[i], rightStoneIndex = i;
        
        for (int j = 0; j < i; j++) {
            int leftStone = stones[j], leftStoneIndex = j;
            int diff = rightStone - leftStone;

            // cout << diff << " ";

            for (int k = 0; k < 4; k++) {
                int K = diff + dx[k];

                if (DP[leftStoneIndex][values[leftStone - K]]) {
                    DP[rightStoneIndex][leftStoneIndex] = true;

                    maxIndex = rightStoneIndex;

                    break;
                }
            }

            // cout << diff << "    ";
        }
        // cout << "\n";
    }

    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) cout << DP[i][j] << " ";
        cout << "\n";
    }

    cout << stones[maxIndex] << "\n";

    return 0;
}