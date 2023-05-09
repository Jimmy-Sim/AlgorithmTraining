#include <iostream>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int sum = N;
    for (int i = 0; i < K; i++) {
        sum += N * 10;
        N *= 10;
    }

    cout << sum << '\n';

    return 0;
}