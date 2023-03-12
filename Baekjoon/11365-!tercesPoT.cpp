#include <iostream>

using namespace std;

int main()
{
    while (true) {
        string phrase;
        getline(cin, phrase);
        if (phrase == "END") break;

        for (int i = phrase.size() - 1; i >= 0; i--) {
            cout << phrase[i];
        }

        cout << '\n';
    }
    
    return 0;
}