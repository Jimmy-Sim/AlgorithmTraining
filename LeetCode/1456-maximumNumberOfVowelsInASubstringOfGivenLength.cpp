class Solution {
public:
    int maxVowels(string s, int k) {
        int pfxSum[100005];
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') pfxSum[i] = 1;
            else pfxSum[i] = 0;
        }
        for (int i = 1; i < s.size(); i++) pfxSum[i] += pfxSum[i - 1];

        int maxCnt = 0;
        for (int i = k - 1; i < s.size(); i++) {
            int cnt;
            if (i == k - 1) cnt = pfxSum[i];
            else cnt = pfxSum[i] - pfxSum[i - k];

            maxCnt = cnt > maxCnt ? cnt : maxCnt;
        }

        return maxCnt;
    }
};
