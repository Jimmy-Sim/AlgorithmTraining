#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++) {
        string password;
        cin >> password;

        if (password.size() >= 6 && password.size() <= 9) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}