#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int maxCoins = max(a, max(b, c));

        n -= (maxCoins - a), a += (maxCoins - a);
        n -= (maxCoins - b), b += (maxCoins - b);
        n -= (maxCoins - c), c += (maxCoins - c);

        if (n >= 0 && n % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}