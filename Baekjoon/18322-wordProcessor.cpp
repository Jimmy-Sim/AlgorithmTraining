#include <iostream>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    string words[105];
    for (int i = 1; i <= N; i++) {
        cin >> words[i];
    }

    string processedEssay[105][105], stopWord = "";
    for (int i = 0; i <= K; i++) {
        stopWord += ".";
    }
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            processedEssay[i][j] = stopWord;
        }
    }

    int line = 1, word = 1, wordCount = 0;
    for (int i = 1; i <= N; i++) {
        if (wordCount + words[i].size() > K) {
            wordCount = words[i].size();
            line++;
            word = 1;
        }
        else {
            wordCount += words[i].size();
        }

        processedEssay[line][word] = words[i];
        word++;
    }

    for (int i = 1; i <= line; i++) {
        for (int j = 1; j <= N; j++) {
            if (j == 1) {
                cout << processedEssay[i][j];
                if (processedEssay[i][j + 1] == stopWord) {
                    cout << "\n";
                    break;
                }
            }
            else if (processedEssay[i][j + 1] == stopWord) {
                cout << " " << processedEssay[i][j] << "\n";
                break;
            }
            else {
                cout << " " << processedEssay[i][j];
            }
        }
    }

    return 0;
}