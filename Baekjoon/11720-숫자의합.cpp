#include <iostream>

using namespace std;

int main()
{
    int N;
    string numbers;
    cin >> N >> numbers;

    int sum = 0;
    for (int i = 0; i < N; i++) sum += (numbers[i] - 48);

    cout << sum << "\n";

    return 0;
}