#include <iostream>

using namespace std;

int N, M;

int main()
{
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        char digits[15];
        cin >> digits;

        for (int j = M - 1; j >= 0; j--) {
            cout << digits[j];
        }

        cout << '\n';
    }

    return 0;
}