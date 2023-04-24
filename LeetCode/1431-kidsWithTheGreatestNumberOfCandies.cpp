class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;

        for (int i = 0; i < candies.size(); i++) {
            int maxCnt = 0;
            for (int j = 0; j < candies.size(); j++) {
                if (j == i) continue;
                maxCnt = candies[j] > maxCnt ? candies[j] : maxCnt;
            }

            if (candies[i] + extraCandies >= maxCnt) ans.push_back(true);
            else ans.push_back(false);
        }

        return ans;
    }
};