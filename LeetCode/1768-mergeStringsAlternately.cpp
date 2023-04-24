class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newWord = "";

        int minCnt = min(word1.size(), word2.size());
        for (int i = 0; i < minCnt; i++) {
            newWord += word1[i];
            newWord += word2[i];
        }

        if (word1.size() > word2.size()) {
            for (int i = minCnt; i < word1.size(); i++) newWord += word1[i];
        }
        else if (word1.size() < word2.size()) {
            for (int i = minCnt; i < word2.size(); i++) newWord += word2[i];
        }

        return newWord;
    }
};