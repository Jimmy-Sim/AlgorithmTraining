#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
int visit[255];
vector<int> connections[250];

void dfs(int cur) {
    visit[cur] = 1;

    for (int i = 0; i < connections[cur].size(); i++) {
        int nxt = connections[cur][i];
        if (!visit[nxt]) dfs(nxt);
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int cow1, cow2;
        cin >> cow1 >> cow2;

        connections[cow1].push_back(cow2);
        connections[cow2].push_back(cow1);
    }

    dfs(1);

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (!visit[i]) {
            cout << i << '\n';
            cnt++;
        }
    }

    if (cnt == 0) cout << 0 << '\n';

    return 0;
}