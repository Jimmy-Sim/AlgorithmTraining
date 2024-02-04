#include <iostream>
#include <algorithm>

using namespace std;

int mod = 1;

bool cmp(int a, int b) {
	return a % mod > b % mod;
}

int main()
{
	int N, K;
	cin >> N >> K;
    
    int baskets[1005];
	int maximum = 0;
	for (int i = 0; i < N; i++) {
		cin >> baskets[i];
		maximum = max(maximum, baskets[i]);
	}
    
	int ans = 0;
	for (int i = 1; i <= maximum; i++) {
		int cnt = 0;
		for (int j = 0; j < N; j++) cnt += baskets[j] / i;
		
        if (cnt < K / 2) continue;
		
        if (cnt >= K) {
			ans = max(ans, (K / 2) * i);
			continue;
		}
        
		mod = i;
		sort(baskets, baskets + N, cmp);

        int cur = (cnt - K / 2) * i;
		for (int j = 0; j < N; j++) {
            if (j + cnt < K) cur += baskets[j] % i;
        }
        
		ans = max(ans, cur);
	}
    
	cout << ans << '\n';
    
    return 0;
}
