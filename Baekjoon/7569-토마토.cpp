#include <iostream>
#include <queue>

#define N_ 1005

using namespace std;

typedef long long ll;
typedef unsigned int uii;

int map_[N_][N_];
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
int n, m;

struct Data {
    int x, y;
}d;

queue<Data> q;
bool vist[N_][N_];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> map_[i][j];
            if(map_[i][j] == 1) {
                vist[i][j] = true;
                d.x = i, d.y = j;
                q.push(d);
            }
        }
    }

    int count_ = 0;
    while(!q.empty()) {
        int sz = q.size();
        for(int i = 0; i < sz; i++) {
            int xx = q.front().x; 
            int yy = q.front().y;
            q.pop();
            for(int a = 0; a< 4; a++) {
                int nxtX = xx + dx[a], nxtY = yy + dy[a];
                if(nxtX < 0 || nxtX >= m || nxtY < 0 || nxtY >=n) continue;
                if(map_[nxtX][nxtY] == 0 && vist[nxtX][nxtY] == false) {
                    vist[nxtX][nxtY] = true;
                    d.x = nxtX, d.y = nxtY;
                    q.push(d);
                }
            }
        }
        if(q.empty()) continue;
        else count_++;
    }

    cout << count_ << "\n";

    return 0;
}