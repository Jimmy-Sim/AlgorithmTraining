#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 4 == 0) cout << "North\n";
        else if (n % 4 == 1) cout << "East\n";
        else if (n % 4 == 2) cout << "South\n";
        else cout << "West\n";
    }

    return 0;
}