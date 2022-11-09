#include <iostream>

using namespace std;

char cowphabet[30], substring[1005];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> cowphabet >> substring;

    int substringSize = 0;
    for (int i = 0; i < 1000; i++) {
        if (substring[i] < 97 || substring[i] > 122) break;
        substringSize++;
    }

    int substringIndex = 0, count = 0;
    while (substringIndex < substringSize) {
        for (int i = 0; i < 26; i++) {
            if (cowphabet[i] == substring[substringIndex]) substringIndex++;
        }

        count++;
    }

    cout << count << "\n";

    return 0;
}