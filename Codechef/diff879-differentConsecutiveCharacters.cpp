#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int cnt = 0;
        char prevBin;
        for (int i = 0; i < n; i++) {
            char bin;
            cin >> bin;

            if (i != 0) {
                if (bin == prevBin) cnt++;
            }

            prevBin = bin;
        }

        cout << cnt << '\n';
    }

    return 0;
}