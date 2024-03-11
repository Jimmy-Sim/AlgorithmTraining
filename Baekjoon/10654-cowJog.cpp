#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    long long N, T;
    cin >> N >> T;
    
    long long cows[100005];
    for (int i = 0; i < N; i++) {
        long long position, speed;
        cin >> position >> speed;
        
        cows[i] = position + T * speed;
    }

    long long ans = 1, idx = cows[N - 1];
    for (int i = N - 1; i >= 0; i--) {
        if (cows[i] < idx) ans++;
        idx = min(idx, cows[i]);
    }
    
    cout << ans << '\n';
    
    return 0;
}
