#include <iostream>
#include <algorithm>

using namespace std;

struct Cow {
	int start, end;
};

bool cmp(Cow a, Cow b) {
    return a.start < b.start;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int N;
	cin >> N;

	Cow cows[100005];
	for (int i = 0; i < N; i++) cin >> cows[i].start >> cows[i].end;
	sort(&cows[0], &cows[N], cmp);

	int totalTime = 0, left = 0, right = 0;
	for (int i = 0; i < N; i++) {
		if (cows[i].end > right) {
			left = max(right, cows[i].start);
			totalTime += cows[i].end - left;
			right = cows[i].end;
		}
	}

	cows[N].start = cows[N - 1].end;

	int minTime = totalTime;
	right = 0;
	for (int i = 0; i < N; i++) {
		int cur = min(cows[i + 1].start, cows[i].end) - max(cows[i].start, right);
		minTime = min(minTime, cur);
		right = max(right, cows[i].end);
	}

	cout << totalTime - max(minTime, 0) << '\n';
    
    return 0;
}
