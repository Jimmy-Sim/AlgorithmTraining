#include <iostream>

using namespace std;

string phrase;

int main()
{
    cin >> phrase;

    for (int i = 0; i < phrase.size(); i++) {
        if (i > 0 && i % 10 == 0) cout << '\n';
        cout << phrase[i];
    }

    return 0;
}