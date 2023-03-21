#include <iostream>

using namespace std;

bool alphabets[30];

int main()
{
    for (int i = 0; i < 25; i++) {
        char alphabet;
        cin >> alphabet;

        alphabets[alphabet - 64] = true;
    }

    for (int i = 1; i <= 26; i++) {
        if (!alphabets[i]) {
            cout << (char)(i + 64) << '\n';
            
            break;
        }
    }

    return 0;
}