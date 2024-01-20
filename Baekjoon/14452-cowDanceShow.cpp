#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N, T;
	cin >> N >> T;
    
	int cows[10005];
	for (int i = 0; i < N; i++) cin >> cows[i];

    int low = 1, high = N;
	int ans = N;
	while (low <= high) {
		int mid = low + (high - low) / 2, time = 0, x = 0, size = 0;
		priority_queue<int> pq;
		while (size < mid && x < N) {
			pq.push(-cows[x]);
			size++;
			x++;
		}

		while (pq.size()) {
			time += max(0, -pq.top() - time);
			pq.pop();
			if (x < N) {
				pq.push(-(cows[x] + time));
				x++;
			}
		}

		if (time > T) low = mid + 1;
        else {
			ans = min(ans, mid);
			high = mid - 1;
		}
	}

	cout << ans << '\n';
    
    return 0;
}
