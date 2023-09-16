class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
        unordered_map<int, int> dif2hi;
        dif2hi[0] = 0;
        
        for (int rod : rods) {
            unordered_map<int, int> newdif2hi = dif2hi;
            
            for (auto& [dif, hi]: dif2hi) {      
                newdif2hi[dif + rod] = max(newdif2hi[dif + rod], hi + rod);
                
                int newdif=abs(dif-rod);
                int newhi= max(hi-dif+rod, hi);
                newdif2hi[newdif] = max(newdif2hi[newdif], newhi);
            }
            
            dif2hi = newdif2hi;
        }

        return dif2hi[0];
    }
};
