#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        char first, second, third;
        cin >> first >> second >> third;

        char a, b;
        cin >> a >> b;

        int aPref, bPref;
        if (a == first) aPref = 1;
        else if (a == second) aPref = 2;
        else aPref = 3;

        if (b == first) bPref = 1;
        else if (b == second) bPref = 2;
        else bPref = 3;

        if (aPref < bPref) cout << a << '\n';
        else cout << b << '\n';
    }

    return 0;
}