#include <bits/stdc++.h>

using namespace std;

int T;
string story;
string wrongWord, correctWord;
string newString;

int main()
{
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> story;
        cin >> wrongWord >> correctWord;

        for (int j = 0; j <= story.size(); j++) {
            string section = story.substr(j, wrongWord.size());

            if (j > story.size() - wrongWord.size()) section = "";

            if (section == wrongWord) {
                newString += correctWord;
                j += (wrongWord.size() - 1);
            }
            else newString += story[j];
        }

        cout << newString << '\n';
    }    

    return 0;
}