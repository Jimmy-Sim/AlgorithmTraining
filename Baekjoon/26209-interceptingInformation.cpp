#include <iostream>

using namespace std;

int main()
{
    bool success = true;
    for (int i = 0; i < 8; i++) {
        int bit;
        cin >> bit;

        if (bit == 9) {
            success = false;
            break;
        }
    }

    if (success) cout << "S\n";
    else cout << "F\n";

    return 0;
}