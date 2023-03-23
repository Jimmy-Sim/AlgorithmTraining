#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int x, int y) {
    return x > y;
}

int main()
{
    int N;
    cin >> N;

    int coins[105], total = 0;
    for (int i = 0; i < N; i++) {
        cin >> coins[i];
        total += coins[i];
    }

    sort(&coins[0], &coins[N], cmp);

    int sum = 0, count = 0;
    for (int i = 0; i < N; i++) {
        sum += coins[i];
        total -= coins[i];
        count++;

        if (sum > total) {
            cout << count << '\n';
            break;
        }
    }

    return 0;
}