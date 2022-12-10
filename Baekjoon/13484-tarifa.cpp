#include <iostream>

using namespace std;

int X, N;
int usage[105], available[105];

int main()
{
    cin >> X >> N;
    for (int i = 0; i < N; i++) cin >> usage[i];

    for (int i = 0; i <= N; i++) available[i] = X;

    for (int i = 0; i < N; i++) {
        available[i + 1] += (available[i] - usage[i]);
    }

    cout << available[N] << '\n';

    return 0;
}