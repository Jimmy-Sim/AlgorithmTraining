#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word, translation;
    cin >> word >> translation;

    string correctTranslation = "";
    for (int i = translation.size() - 1; i >= 0; i--) correctTranslation += translation[i];

    if (correctTranslation == word) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}