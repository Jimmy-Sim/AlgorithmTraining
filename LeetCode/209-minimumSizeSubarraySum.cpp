class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n = a.size();
        int i = 0, j = 0, sum = 0, minlen = n + 1;
		
        while (j < n){
            sum += a[j];
			
            while (i <= j && sum >= target){
                minlen = min(minlen, j - i + 1);
                sum -= a[i];
                i++;
            }
			
            j++;
        }
        
        return (minlen == n + 1 ? 0 : minlen);
    }
};
