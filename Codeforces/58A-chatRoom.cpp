#include <iostream>
#include <string>

using namespace std;

int main()
{
    string phrase;
    cin >> phrase;
    char hello[5] = {'h', 'e', 'l', 'l', 'o'};
    bool helloCheck[5] = {};

    int index = 0;
    for (int i = 0; i < phrase.size(); i++) {
        if (phrase[i] == hello[index]) {
            helloCheck[index] = true;
            index++;
        }
    }

    int trueCount = 0;
    for (int i = 0; i < 5; i++) {
        if (helloCheck[i]) trueCount++;
    }

    if (trueCount == 5) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}