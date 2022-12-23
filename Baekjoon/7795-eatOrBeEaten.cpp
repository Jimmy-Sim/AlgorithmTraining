#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 20005;

int T;
int N, M;
int arrA[MAX], arrB[MAX];

int main()
{
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N >> M;
        for (int j = 0; j < N; j++) cin >> arrA[j];
        for (int j = 0; j < M; j++) cin >> arrB[j];
        
        sort(&arrB[0], &arrB[M]);

        int sum = 0;

        for (int j = 0; j < N; j++) {
            int size = arrA[j], greaterCount = lower_bound(&arrB[0], &arrB[M], size) - &arrB[0];
            sum += greaterCount;

            cout << greaterCount << " ";
        }

        cout << '\n';

        cout << sum << '\n';
    }

    return 0;
}