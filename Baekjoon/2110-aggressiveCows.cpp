#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N, C;
	cin >> N >> C;
    
	int positions[200005];
	for (int i = 0; i < N; i++) cin >> positions[i];
	sort(&positions[0], &positions[N]);

    int ans = 0;
    int low = 1, high = positions[N - 1];
	while (low <= high) {
		int mid = (low + high) / 2;
        int rtr = 1, stl = positions[0];

		for (int i = 1; i < N; i++) {
			if (positions[i] - stl >= mid) {
				rtr++;
				stl = positions[i];
			}
		}

		if (rtr >= C) {
			ans = max(ans, mid);
			low = mid + 1;
		}
		else high = mid - 1;
	}
    
	cout << ans;
	
    return 0;
}
