#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
	cin >> N;

	int cows[25], stalls[25];
	for (int i = 0; i < N; i++) cin >> cows[i];
	for (int i = 0; i < N; i++) cin >> stalls[i];

	sort(&cows[0], &cows[N]);
	sort(&stalls[0], &stalls[N]);

	long long cnt = 1;
	int idx = N - 1;
	for (int i = N - 1; i >= 1; i--) {
		while (idx >= 0 && stalls[idx] >= cows[i]) idx--;

		cnt *= (i - idx);
	}

	cout << cnt << '\n';
    
    return 0;
}
