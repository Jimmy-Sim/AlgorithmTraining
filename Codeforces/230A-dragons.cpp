#include <iostream>
#include <algorithm>

using namespace std;

struct Dragon {
    int strength, reward;
};

bool cmp(Dragon x, Dragon y) {
    return x.strength < y.strength;
}

int main()
{
    int strength, n;
    cin >> strength >> n;

    Dragon dragons[1005];
    for (int i = 0; i < n; i++) {
        cin >> dragons[i].strength >> dragons[i].reward;
    }

    sort(&dragons[0], &dragons[n], cmp);

    bool win = true;
    for (int i = 0; i < n; i++) {
        if (strength <= dragons[i].strength) {
            win = false;
            break;
        }
        strength += dragons[i].reward;
    }

    if (win) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}