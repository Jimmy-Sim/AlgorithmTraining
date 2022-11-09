#include <iostream>

using namespace std;

string phrase, subPhrase, newPhrase;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> phrase >> subPhrase;

    int num = 0, phraseLength = phrase.size(), subPhraseLength = subPhrase.size();
    
    while (num < phraseLength - subPhraseLength) {
        string substringB = phrase.substr(num, subPhraseLength);

        if (substringB == subPhrase) {
            string substringA = phrase.substr(0, num), substringC = phrase.substr(num + subPhraseLength, phraseLength - (num + subPhraseLength));

            phrase = substringA + substringC;

            if (num < subPhraseLength) {
                num = 0;
            }
            else {
                num -= subPhraseLength;
            }
        }
        else {
            num++;
        }
        phraseLength = phrase.size();
    }

    cout << phrase << "\n";

    return 0;
}