#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    int x = N - 1, y = 1;
    for (int i = 0; i < N; i++) {
        for (int j = x; j > 0; j--) cout << ' ';
        for (int j = 0; j < y; j++) cout << '*';
        cout << '\n';

        x--, y += 2;
    }

    return 0;
}