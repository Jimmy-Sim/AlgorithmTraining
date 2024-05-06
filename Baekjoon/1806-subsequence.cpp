#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N, S;
    cin >> N >> S;
    
	int numbers[100005];
	for (int i = 0; i < N; i++) cin >> numbers[i];

	int low = 0, high = 0;
	int sum = numbers[0], ans = N + 1;
	while (low <= high && high < N) {
		if (sum < S) {
            sum += numbers[++high];
        }
		else {
			ans = min(ans, high - low + 1);
			sum -= numbers[low++];
		}
	}

	if (ans == N + 1) ans = 0;
	
    cout << ans << '\n';

	return 0;
}
