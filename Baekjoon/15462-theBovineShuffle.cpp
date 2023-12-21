#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int N;
	cin >> N;
    
	int moves[100005], afterMoves[100005] = {};
	for (int i = 0; i < N; i++) {
		cin >> moves[i];
		moves[i]--;
		afterMoves[moves[i]]++;
	}

	int ans = N;
	queue<int> noCows;

	for (int i = 0; i < N; i++) {
		if (afterMoves[i] == 0) {
			noCows.push(i);
			ans--;
		}
	}

	while (!noCows.empty()) {
		int curr = noCows.front();
		noCows.pop();

		if (--afterMoves[moves[curr]] == 0) {
			noCows.push(moves[curr]);
			ans--;
		}
	}
    
	cout << ans << '\n';
    
    return 0;
}
