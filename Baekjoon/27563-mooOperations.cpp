#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        string text;
        cin >> text;

        if (text.size() < 3) {
            cout << -1 << '\n';
            continue;
        }

        bool found = false;
        for (int i = 0; i <= text.size() - 3; i++) {
            if (text[i] == 'M' && text[i + 1] == 'O' && text[i + 2] == 'O') {
                found = true;
                cout << text.size() - 3 << '\n';
                break;
            }
        }
        if (found) continue;

        for (int i = 0; i <= text.size() - 3; i++) {
            if ((text[i] == 'M' && text[i + 1] == 'O' && text[i + 2] == 'M') || (text[i] == 'O' && text[i + 1] == 'O' && text[i + 2] == 'O')) {
                found = true;
                cout << text.size() - 2 << '\n';
                break;
            }
        }
        if (found) continue;

        for (int i = 0; i <= text.size() - 3; i++) {
            if (text[i] == 'O' && text[i + 1] == 'O' && text[i + 2] == 'M') {
                found = true;
                cout << text.size() - 1 << '\n';
                break;
            }
        }

        if (!found) cout << -1 << '\n';
    }

    return 0;
}