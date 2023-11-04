#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    long long t[100001];
    for (int i = 0; i < N; i++) cin >> t[i];
    sort(&t[0], &t[N]);
    
    long long ans = 0;
    long long low = 1, high = M * t[0];
    while (high >= low) {
        long long mid = low + (high - low) / 2;
        long long people = 0;
        
        for (int i = 0; i < N; i++) people += mid / t[i];
        
        if (people >= M) {
            if (ans > mid || ans == 0) ans = mid;
            high = mid - 1;
        }
        else low = mid + 1;
    }
    
    cout << ans << '\n';
    
    return 0;
}
