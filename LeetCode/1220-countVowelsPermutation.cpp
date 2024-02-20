class Solution {
public:
    int countVowelPermutation(int n) {
        const int MOD = 1e9 + 7;
        long long a = 1, e = 1, i = 1, o = 1, u = 1;
        
        for (int j = 1; j < n; j++) {
            long long a_next = e, e_next = (a + i) % MOD, i_next = (a + e + o + u) % MOD, o_next = (i + u) % MOD, u_next = a;
            
            a = a_next, e = e_next, i = i_next, o = o_next, u = u_next;
        }
        
        return (a + e + i + o + u) % MOD;
    }
};
