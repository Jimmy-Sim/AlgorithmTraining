class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); i++) {
            if (n == 0) break;
            
            if (!flowerbed[i]) {
                if (i == 0 && i == flowerbed.size() - 1) {
                    if (!flowerbed[i]) {
                        flowerbed[i] = 1;
                        n--;
                    }

                    break;
                }
                else if (i == 0) {
                    if (!flowerbed[i + 1]) {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else if (i == flowerbed.size() - 1) {
                    if (!flowerbed[i - 1]) {
                        flowerbed[i] = 1;
                        n--;
                    }
                }
                else if (!flowerbed[i - 1] && !flowerbed[i + 1]) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }

        if (n == 0) return true;
        
        return false;
    }
};
