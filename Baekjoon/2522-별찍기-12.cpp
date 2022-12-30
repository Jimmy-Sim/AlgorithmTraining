#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    int x = N - 1, y = 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < x; j++) cout << ' ';
        for (int j = 0; j < y; j++) cout << '*';
        cout << '\n';

        x--, y++;
    }
    x += 2, y -= 2;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < x; j++) cout << ' ';
        for (int j = 0; j < y; j++) cout << '*';
        cout << '\n';

        x++, y--;
    }

    return 0;
}