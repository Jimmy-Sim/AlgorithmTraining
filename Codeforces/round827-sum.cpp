#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b + c) {
            cout << "YES\n";
            continue;
        }
        else if (b == a + c) {
            cout << "YES\n";
            continue;
        }
        else if (c == a + b) {
            cout << "YES\n";
            continue;
        }
        else {
            cout << "NO\n";
            continue;
        }
    }

    return 0;
}