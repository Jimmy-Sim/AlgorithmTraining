#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;

    string newWord = "";
    for (int i = 0; i < word.size(); i++) {
        if (word[i] < 97) word[i] += 32;

        if (word[i] != 'a' && word[i] != 'o' && word[i] != 'y' && word[i] != 'e' && word[i] != 'u' && word[i] != 'i') {
            newWord += '.';
            newWord += word[i];
        }
    }

    cout << newWord << '\n';

    return 0;
}