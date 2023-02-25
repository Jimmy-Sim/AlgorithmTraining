#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++) {
        long long num1, num2;
        cin >> num1 >> num2;

        cout << num1 + num2 << '\n';
    }

    return 0;
}