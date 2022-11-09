#include <iostream>

using namespace std;

const int MAX = 105;

int N;
char str[MAX];
string firstSubstring, secondSubstring;
int asteriskIndex;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;

    cin >> str;

    for (int i = 0; i < N - 1; i++) {
        if (str[i] != '*') firstSubstring += str[i];
        else {
            asteriskIndex = i;
            break;
        }
    }
    
    int x = 0;
    for (int i = asteriskIndex + 1; i < N; i++) {
       secondSubstring += str[i];
    }
    
    cout << firstSubstring << " " << secondSubstring << "\n";

    
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;

        string substring1 = word.substr(0, firstSubstring.size()), substring2 = word.substr(word.size() - secondSubstring.size(), secondSubstring.size());
        
        if (firstSubstring == substring1 && secondSubstring == substring2) cout << "DA\n";
        else cout << "NE\n";
    }

    return 0;
}