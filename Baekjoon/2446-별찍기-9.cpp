#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    int x = 2 * N - 1, y = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < y; j++) cout << ' ';
        for (int j = 0; j < x; j++) cout << '*';
        cout << '\n';

        x -= 2, y++;
    }
    x += 4, y -= 2;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < y; j++) cout << ' ';
        for (int j = 0; j < x; j++) cout << '*';
        cout << '\n';

        x += 2, y--;
    }

    return 0;
}