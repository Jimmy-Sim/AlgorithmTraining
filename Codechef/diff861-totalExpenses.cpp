#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (a <= 1000) cout << fixed << a * b << '\n';
        else cout << fixed << 0.9 * (a * b) << '\n';
    }

    return 0;
}