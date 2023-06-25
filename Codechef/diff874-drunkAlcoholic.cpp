#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int total = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) total += 3;
            else total--;
        }

        cout << total << '\n';
    }

    return 0;
}