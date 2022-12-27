// Loop:
/*
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
*/

// Recursion:
#include <iostream>

using namespace std;

int N;

int fibonacci(int num)
{
    if (num >= 2) return fibonacci(num - 2) + fibonacci(num - 1);
    else if (num == 1) return 1;
    else return 0;
}

int main()
{
    cin >> N;

    cout << fibonacci(N) << '\n';

    return 0;
}