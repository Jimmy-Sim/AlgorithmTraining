#include <iostream>

using namespace std;

int N;
int dataItems[105];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> dataItems[i];

    for (int i = 0; i < N; i++) {
        int data = dataItems[i];

        for (int j = 0; j < data; j++) cout << '=';
        cout << '\n';
    }

    return 0;
}