#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    int names[105];
    for (int i = 0; i < K; i++) cin >> names[i];

    int ans = 0, cnt[105] = {};
    for (int i = 0; i < K; i++) {
        bool matching = false;
        for (int j = 0; j < N; j++) {
            if (cnt[j] == names[i]) {
                matching = true;
                break;
            }
        }
        if (matching == true) continue;

        for (int j = 0; j < N; j++) {
            if (cnt[j] == 0) {
                cnt[j] = names[i];
                matching = true;
                break;
            }
        }
        if (matching == true) continue;


        int last = -1, idx = -1;
        for (int j = 0; j < N; j++) {
            int tmp = 0;
            for (int k = i + 1; k < K; k++) {
                if (names[k] == cnt[j]) break;
                tmp++;
            }
            
            if (tmp > last) {
                last = tmp;
                idx = j;
            }
        }
        
        cnt[idx] = names[i];
        ans++;
    }
    
    cout << ans << '\n';
    
    return 0;
}
