#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int K, N;
	cin >> K >> N;
	
    int lengths[10005], maxLength = 0;
	for (int i = 0; i < K; i++) {
		cin >> lengths[i];
        maxLength = max(maxLength, lengths[i]);
	}
    
	long long low = 1, high = maxLength;
	int ans = 0;
	while (low <= high) {
		long long mid = (low + high) / 2;
		int cnt = 0;
		for (int i = 0; i < K; i++) cnt += lengths[i] / mid;

		if (cnt >= N) {
			low = mid + 1;
			if (ans < mid) ans = mid;
		}
		else high = mid - 1;
	}
	
	cout << ans << '\n';
    
    return 0;
}
