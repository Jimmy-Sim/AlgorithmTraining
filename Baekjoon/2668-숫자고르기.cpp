#include <iostream>

using namespace std;

int N, numbers[105], cnt;
bool visited[105];
int ans[105];

void init() {
    for (int i = 1; i <= 100; i++) visited[i] = false;
}

void dfs(int cur, int start) {
	if (visited[cur]) {
		if (cur == start) ans[cnt++] = start;
	}
	else {
		visited[cur] = true;
		dfs(numbers[cur], start);
	}
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> numbers[i];
	
	for (int i = 1; i <= N; i++) {
		init();
        
		dfs(i, i);
	}

	cout << cnt << '\n';
	for (int i = 0; i < cnt; i++) cout << ans[i] << '\n';
    
    return 0;
}
