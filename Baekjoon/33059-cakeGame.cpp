#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int T;
    cin >> T;

    int et[1000005];

	while (T--) {
        int N;
		cin >> N;
        
		long long ans = 2e18 + 7;
		for (int i = 1; i <= N; i++) cin >> et[i];
		
        long long cw = 0, pwer = 0;
		for (int i = 1; i <= N; i++) {
			cw += et[i];
			if (i >= N / 2 + 1) {
				ans = min(ans, cw);
				cw -= et[i - (N / 2 + 1) + 1];
			}
			
			pwer += et[i];
		}

		cout << ans << ' ' << pwer - ans << '\n';	
	}

    return 0;
}
