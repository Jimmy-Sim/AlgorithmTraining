class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double slope;
        for (int i = 0; i < coordinates.size() - 1; i++) {
            double curSlope;
            if (coordinates[i][0] - coordinates[i + 1][0] == 0) curSlope = 100000;
            else curSlope = (double)(coordinates[i][1] - coordinates[i + 1][1]) / (coordinates[i][0] - coordinates[i + 1][0]);

            if (i == 0) slope = curSlope;
            else if (curSlope != slope) return false;
        }

        return true;
    }
};
