class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string, int> rowCounts;
        int count = 0;

        for (const auto& row : grid) {
            string key = rowToString(row);
            rowCounts[key]++;
        }

        for (size_t col = 0; col < grid[0].size(); col++) {
            vector<int> column(grid.size());
            for (size_t row = 0; row < grid.size(); row++) column[row] = grid[row][col];
            string key = rowToString(column);
            count += rowCounts[key];
        }

        return count;
    }

private:
    string rowToString(const vector<int>& row) {
        string str;
        for (const auto& num : row) str += to_string(num) + ',';

        return str;
    }
};
