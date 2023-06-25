#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a + c * 10 < b + d * 10) cout << "Chef\n";
        else if (a + c * 10 == b + d * 10) cout << "Draw\n";
        else cout << "Chefina\n";
    }

    return 0;
}