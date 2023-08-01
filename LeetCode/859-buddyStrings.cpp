class Solution {
public:
    bool buddyStrings(string s, string goal) {
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == goal[i] && i >= 2 && i < s.size() - 2) continue;

            for (int j = i + 1; j < s.size(); j++) {
                swap(s[i], s[j]);

                if (s == goal) return true;

                swap(s[i], s[j]);
            }
        }

        return false;
    }
};
