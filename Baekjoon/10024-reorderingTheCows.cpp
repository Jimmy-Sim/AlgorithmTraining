#include <iostream>

using namespace std;

const int MAX = 105;

int N, cows[MAX], orders[MAX], check[MAX];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> cows[i];
    for (int i = 0; i < N; i++) cin >> orders[i];

    for (int i = 0; i < N; i++) {
        if (check[i] == 1) continue;
        int index = i;
        cout << index << "\n";
        
        while (true) {
            int cow = cows[index], newPosition;
            cout << index << "\n";

            for (int j = 0; j < N; j++) {
               if (orders[j] == cow) newPosition = j;
            }

            if (cows[newPosition] == 0) {
                cows[newPosition] = cow;
                check[index] = 1;
                break;
            }
            else {
                cows[index] = 0;
                cows[newPosition] = cow;
                check[index] = 1;
                index = newPosition;
            }

            // cout << cow << " " << newPosition << "\n";
        }

        for (int j = 0; j < N; j++) cout << cows[j] << " ";
        cout << "\n";
    }

    return 0;
}