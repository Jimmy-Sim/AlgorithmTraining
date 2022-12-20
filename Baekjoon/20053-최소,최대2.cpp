#include <iostream>
#include <algorithm>

using namespace std;

int T, N;

int main()
{
    cin >> T >> N;

    for (int i = 0; i < T; i++) {
        int numbers[1000005];

        cin >> N;
        for (int j = 0; j < N; j++) cin >> numbers[j];
        sort(&numbers[0], &numbers[N]);

        cout << numbers[0] << " " << numbers[N - 1] << "\n";
    }

    return 0;
}