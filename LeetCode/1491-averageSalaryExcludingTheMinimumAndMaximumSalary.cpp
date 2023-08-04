class Solution {
public:
    double average(vector<int>& salary) {
        sort(&salary[0], &salary[salary.size()]);

        int sum = 0;
        for (int i = 1; i < salary.size() - 1; i++) sum += salary[i];

        return (double)sum / (salary.size() - 2);
    }
};
