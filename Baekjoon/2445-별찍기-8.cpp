#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    int x = 1, y = 2 * N - 2;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < x; j++) cout << '*';
        for (int j = 0; j < y; j++) cout << ' ';
        for (int j = 0; j < x; j++) cout << '*';
        cout << '\n';

        x++, y -= 2;
    }
    x -= 2, y += 4;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < x; j++) cout << '*';
        for (int j = 0; j < y; j++) cout << ' ';
        for (int j = 0; j < x; j++) cout << '*';
        cout << '\n';

        x--, y += 2;
    }

    return 0;
}