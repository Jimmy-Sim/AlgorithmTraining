#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M;

vector<pair<int, int>> bessie[20];
vector<pair<int, int>> elsie[20];

queue<pair<int, int>> q;

vector<int> b_ans;
vector<int> e_ans;

void bfs()
{
    q.push({1, 0}); // starting point

    while(!q.empty())
    {
        int here = q.front().first;
        int cost = q.front().second;

        q.pop();

        for(int i = 0; i < bessie[here].size(); i++)
        {
            int nxt = bessie[here][i].first;
            int nxtcost = bessie[here][i].second;

            if(nxt == N) b_ans.push_back(nxtcost + cost);
            else {
                q.push({nxt, nxtcost + cost});
            }
        }
    }

    q.push({1, 0});

    while(!q.empty()) {
        int current = q.front().first;
        int time = q.front().second;

        q.pop();

        for (int i = 0; i < elsie[current].size(); i++) {
            int nxt =  elsie[current][i].first;
            int nxtTime = elsie[current][i].second;

            if (nxt == N) e_ans.push_back(time + nxtTime);
            else q.push({nxt, time + nxtTime});
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    

    cin >> N >> M;
    
    int a, b, c, d;
    for (int i = 0; i < M; i++) {
        cin >> a >> b >> c >> d;

        bessie[a].push_back({b, c});
        elsie[a].push_back({b, d});
    }

    bfs();

    sort(&b_ans[0], &b_ans[b_ans.size()]);
    sort(&e_ans[0], &e_ans[e_ans.size()]);

    int ans = 20000;
    for (int i = 0; i < b_ans.size(); i++) {
        for (int j = 0; j < e_ans.size(); j++) {
            if (b_ans[i] == e_ans[j]) ans = b_ans[i] < ans ? b_ans[i] : ans;
        }
    }

    if (ans == 20000) cout << "IMPOSSIBLE\n";
    else cout << ans << "\n";
}