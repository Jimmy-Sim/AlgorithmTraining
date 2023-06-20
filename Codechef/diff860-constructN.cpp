#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0 || n % 7 == 0) cout << "YES\n";
        else if (n > 7 && n % 2 == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}