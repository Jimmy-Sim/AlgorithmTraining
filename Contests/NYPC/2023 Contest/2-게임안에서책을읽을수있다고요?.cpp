#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i <= N; i++) {
        string sentence;
        getline(cin, sentence);

        bool isCenter, isRight;
        if (sentence == "<CENTER>") {
            isCenter = true;
            continue;
        }
        else if (sentence == "</CENTER>") {
            isCenter = false;
            continue;
        }
        else if (sentence == "<RIGHT>") {
            isRight = true;
            continue;
        }
        else if (sentence == "</RIGHT>") {
            isRight = false;
            continue;
        }

        stringstream words(sentence);

        string word;
        int cnt = 0;
        bool isFirst = true;
        while (getline(words, word, ' ')) {
            if (isFirst) {
                cout << word;
                cnt += word.size();
                isFirst = false;
            }
            else {
                if (cnt + word.size() + 1 <= M) {
                    cout << '-' << word;
                    cnt += (word.size() + 1);
                }
                else {
                    cout << '\n' << word;
                    cnt = word.size();
                }
            }
        }
    }

    return 0;
}
