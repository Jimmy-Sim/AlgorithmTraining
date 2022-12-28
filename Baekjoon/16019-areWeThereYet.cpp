#include <iostream>

using namespace std;

int distances[10];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    for (int i = 1; i < 5; i++) {
        cin >> distances[i];

        distances[i] += distances[i - 1];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) cout << abs(distances[i] - distances[j]) << ' ';
        cout << '\n';
    }

    return 0;
}