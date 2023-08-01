class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int heighest = 0;
        for (int i = 0; i < gain.size(); i++) {
            if (i > 0) gain[i] += gain[i - 1];
            heighest = gain[i] > heighest ? gain[i] : heighest;
        }

        return heighest;
    }
};
