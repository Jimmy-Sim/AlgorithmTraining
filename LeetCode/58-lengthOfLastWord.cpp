class Solution {
public:
    int lengthOfLastWord(string s) {
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                int cnt = 0;
                while (i >= 0) {
                    if (s[i] != ' ') cnt++;
                    else return cnt;

                    i--;
                }

                return cnt;
            }
        }

        return 0;
    }
};
