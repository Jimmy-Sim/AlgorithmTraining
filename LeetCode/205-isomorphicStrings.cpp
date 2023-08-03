class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> pairs1, pairs2;
        for (int i = 0; i < s.size(); i++) {
            if (pairs1.find(s[i]) == pairs1.end()) pairs1[s[i]] = t[i];
            else if (pairs1[s[i]] != t[i]) return false;
            if (pairs2.find(t[i]) == pairs2.end()) pairs2[t[i]] = s[i];
            else if (pairs2[t[i]] != s[i]) return false;
        }

        return true;
    }
};
