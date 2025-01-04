#include <bits/stdc++.h>

using namespace std;

string makeMoo(int x, int y) {
    string res;
    res.push_back((char)('a' + x));
    res.push_back((char)('a' + y));
    res.push_back((char)('a' + y));
    
    return res;
}

pair<int,int> getMooPattern(char c1, char c2, char c3) {
    if (c2 == c3 && c1 != c2) return {c1 - 'a', c2 - 'a'};

    return {-1, -1};
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, F;
    cin >> N >> F;

    string S; 
    cin >> S;

    static int freq[26][26];

    memset(freq, 0, sizeof(freq));

    for (int i = 0; i + 2 < N; i++) {
        auto p = getMooPattern(S[i], S[i + 1], S[i + 2]);
        if (p.first != -1) freq[p.first][p.second]++;
    }

    set<string> possibleMoos;
    for (int a = 0; a < 26; a++) {
        for (int b = 0; b < 26; b++) {
            if (a == b) continue;
            if (freq[a][b] >= F) possibleMoos.insert(makeMoo(a, b));
        }
    }

    vector<vector<int>> subIndices(N);
    for(int i = 0; i + 2 < N; i++) {
        subIndices[i].push_back(i);
        subIndices[i + 1].push_back(i);
        subIndices[i + 2].push_back(i);
    }

    for (int p = 0; p < N; p++) {
        char original = S[p];
        int origVal = original - 'a';

        vector<pair<int,int>> oldMoos;
        for(int idx: subIndices[p]){
            auto oldPat = getMooPattern(S[idx], S[idx + 1], S[idx + 2]);
            if (oldPat.first != -1) oldMoos.push_back(oldPat);
        }

        for (int c = 0; c < 26; c++) {
            if (c == origVal) continue;
            for (auto &om: oldMoos) freq[om.first][om.second]--;

            vector<pair<int,int>> newMoos;
            for (int idx: subIndices[p]) {
                char tmp[3];
                tmp[0] = S[idx], tmp[1] = S[idx + 1], tmp[2] = S[idx + 2];
                tmp[p - idx] = (char)('a' + c);

                auto np = getMooPattern(tmp[0], tmp[1], tmp[2]);
                if (np.first != -1) newMoos.push_back(np);
            }
            for (auto &nm: newMoos) freq[nm.first][nm.second]++;

            unordered_set<long long> changed;
            auto encode = [&](int x, int y) {
                return (long long)x * 26LL + y;
            };
            
            for (auto &om: oldMoos) changed.insert(encode(om.first, om.second));
            for (auto &nm: newMoos) changed.insert(encode(nm.first, nm.second));

            for (auto code: changed) {
                int a = code / 26, b = code % 26;
                if (a != b && freq[a][b] >= F) possibleMoos.insert(makeMoo(a, b));
            }

            for (auto &nm: newMoos) freq[nm.first][nm.second]--;
            for (auto &om: oldMoos) freq[om.first][om.second]++;
        }
    }

    cout << possibleMoos.size() << '\n';
    for (const auto &moo: possibleMoos) cout << moo << '\n';

    return 0;
}
