#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N, M;
	cin >> N >> M;
    
    pair<long long, long long> intervals[100005];
	for (int i = 0; i < M; i++) cin >> intervals[i].first >> intervals[i].second;
    
	sort(intervals, intervals + M);

	long long low = 0;
	long long high = intervals[M - 1].second - intervals[0].first + 1;
	while (low < high) {
		long long mid = low + (high - low + 1) / 2, cur = intervals[0].first;
		int cnt = 1, idx = 0;

		while (cur + mid <= intervals[M - 1].second) {
			while (cur + mid > intervals[idx].second) idx++;
            
			cur = max(intervals[idx].first, cur + mid);
			cnt++;
            
			if (cnt == N) break;
		}

		if (cnt >= N) low = mid;
		else high = mid - 1;
	}
    
	cout << low << '\n';
    
    return 0;
}
