#include <bits/stdc++.h>

using namespace std;

const int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};
int N, M, dd[1005][1005], cur, ans, isExist[1000005], lab[1000005], par[1000005], res[200005], X[200005], Y[200005];
char a[1005][1005], C[200005];

int id(int x, int y) {
	return (x - 1) * N + y;
}

bool inSide(int u, int v) {
	return (u >= 1 && u <= N && v >= 1 && v <= N);
}

bool check(int x1, int y1, int x2, int y2) {
	if (a[x1][y1] == '*') return true;

	if (a[x1][y1] == 'L') y1--;
	else if (a[x1][y1] == 'R') y1++;
	else if (a[x1][y1] == 'U') x1--;
	else x1++;

	return (x1 == x2 && y1 == y2);
}

void dfs(int u, int v) {
	if (dd[u][v] == cur) return;

	dd[u][v] = cur;
	isExist[id(u, v)] = 1;
	++ans;
	for (int i = 0; i < 4; i++) {
		int x = u + dx[i];
		int y = v + dy[i];

		if (inSide(x, y) && dd[x][y] != cur && check(x, y, u, v)) {
			dfs(x, y);
		}
	}
}

bool check(int x, int y) {
	if (a[x][y] == '*') {
		for (int i = 0; i < 4; i++) {
			int X = x + dx[i];
			int Y = y + dy[i];

			if (!inSide(X, Y)) return true;
		}

		return false;
	}

	if (a[x][y] == 'L') y--;
	else if (a[x][y] == 'R') y++;
	else if (a[x][y] == 'U') x--;
	else x++;

	if (!inSide(x, y)) return true;

	return false;
}

int calc() {
	ans = 0;
	++cur;

	for (int i = 1; i <= N; i++) {
		if (check(i, 1)) dfs(i, 1);
		if (check(i, N)) dfs(i, N);
		if (check(1, i)) dfs(1, i);
		if (check(N, i)) dfs(N, i);
	}

	return ans;
}

int getRoot(int u) {
	return (par[u] == -1 ? u : par[u] = getRoot(par[u]));
}

void Union(int u, int v) {
	u = getRoot(u), v = getRoot(v);

	if (u == v) return;

	if ((isExist[u] ^ isExist[v]) == 1) {
		if (isExist[u] == 0) ans += lab[u];
		if (isExist[v] == 0) ans += lab[v];
	}

	par[u] = v;
	isExist[v] = max(isExist[v], isExist[u]);
	lab[v] += lab[u];
}

void dfs2(int u, int v) {
	for (int i = 0; i < 4; i++) {
		int x = u + dx[i], y = v + dy[i];

		if (inSide(x, y) && check(x, y, u, v) && isExist[getRoot(id(x, y))] == 0) {
			Union(id(x, y), id(u, v));
			dfs2(x, y);
		}
	}
}

void solve() {
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++) {
			a[i][j] = '*';
			lab[id(i, j)] = 1;
		}

	memset(par, -1, sizeof par);
	for (int i = 1; i <= M; i++) {
		int x, y;
        char c;
		cin >> x >> y >> c;

		X[i] = x, Y[i] = y, C[i] = c, a[x][y] = c;
	}

	res[M] = calc();
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
            if (dd[i][j])
			for (int k = 0; k < 4; k++) {
				int x = i + dx[k], y = j + dy[k];
				if (inSide(x, y) && dd[x][y]) Union(id(x, y), id(i, j));
			}
        }
    }

	for (int i = M; i >= 1; i--) {
		int x = X[i], y = Y[i];
		a[x][y] = '*';
		ans -= isExist[getRoot(id(x, y))];

		for (int j = 0; j < 4; j++) {
			int X = x + dx[j], Y = y + dy[j];

			if (inSide(X, Y) && isExist[getRoot(id(X, Y))]) isExist[getRoot(id(x, y))] = 1;
			if (inSide(X, Y) == 0) isExist[getRoot(id(x, y))] = 1;
		}

		ans += isExist[getRoot(id(x, y))];
		if (isExist[getRoot(id(x, y))]) dfs2(x, y);
		res[i - 1] = ans;
	}

	for (int i = 1; i <= M; i++) cout << N * N - res[i] << '\n';
}

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
	
	solve();

	return 0;
}
