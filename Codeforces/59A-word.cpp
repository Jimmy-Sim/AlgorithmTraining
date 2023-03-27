#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int lowercaseCount = 0, uppercaseCount = 0;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] < 97) uppercaseCount++;
        else lowercaseCount++;
    }

    if (uppercaseCount > lowercaseCount) {
        for (int i = 0; i < word.size(); i++) {
            if (word[i] >= 97) word[i] -= 32;
        }
    }
    else {
        for (int i = 0; i < word.size(); i++) {
            if (word[i] < 97) word[i] += 32;
        }
    }

    cout << word << '\n';

    return 0;
}