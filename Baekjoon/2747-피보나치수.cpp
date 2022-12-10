#include <iostream>

using namespace std;

int N;
long long fibonacci[50];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    fibonacci[1] = 1;

    cin >> N;

    for (int i = 2; i <= N; i++) {
        fibonacci[i] = fibonacci[i -2] + fibonacci[i - 1];
    }

    cout << fibonacci[N] << "\n";

    return 0;
}