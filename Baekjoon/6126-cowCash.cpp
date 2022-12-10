#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 30;

int N, VALUE;
int coins[MAX];
int counting[10005];

int main()
{
    cin >> N >> VALUE;

    counting[0] = 1;

    for (int i = 0; i < N; i++) {
        cin >> coins[i];
    }

    sort(&coins[0], &coins[N]);

    for (int i = 0; i < N; i++) {
        for (int j = coins[i]; j <= VALUE; j++) {
            counting[j] += counting[j - coins[i]];
        }

        /*
        for(int j = 0; j <= VALUE; j++)
        {
            cout << j << ' ';
        }
        cout << '\n';

        for(int j = 0; j <= VALUE; j++)
        {
            cout << counting[j] << ' ';
        }
        cout << '\n';
        */
    }

    // cout << "\n";

    cout << counting[VALUE] << "\n";

    return 0;
}