#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    int x = N - 1, y = 1;
    for (int i = 0; i < x; i++) cout << ' ';
    x--;
    cout << "*\n";
    for (int i = 1; i < N - 1; i++) {
        for (int j = 0; j < x; j++) cout << ' ';
        cout << '*';
        for (int j = 0; j < y; j++) cout << ' ';
        cout << '*';
        cout << '\n';

        x--, y += 2;
    }
    if (N != 1) {
        for (int i = 0; i < 2 * N - 1; i++) cout << '*';
        cout << '\n';
    }
    
    return 0;
}