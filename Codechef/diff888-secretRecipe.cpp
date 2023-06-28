#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        double x1, x2, x3, v1, v2;
        cin >> x1 >> x2 >> x3 >> v1 >> v2;

        if ((x3 - x1) / v1 < (x2 - x3) / v2) cout << "Chef\n";
        else if ((x3 - x1) / v1 == (x2 - x3) / v2) cout << "Draw\n";
        else cout << "Kefa\n";
    }

    return 0;
}