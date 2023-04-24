class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int cnt = stones.size();

        sort(&stones[0], &stones[cnt]);

        while (cnt > 1) {
            if (stones[cnt - 2] == stones[cnt - 1]) {
                stones.pop_back();
                stones.pop_back();
                cnt -= 2;
            }
            else {
                stones[cnt - 2] = max(stones[cnt - 2], stones[cnt - 1]) - min(stones[cnt - 2], stones[cnt - 1]);
                stones.pop_back();
                cnt--;
            }

            sort(&stones[0], &stones[cnt]);
        }

        if (cnt) return stones[0];
        
        return 0;
    }
};