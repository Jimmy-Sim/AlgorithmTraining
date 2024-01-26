#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    int cows[100005];
    for (int i = 0; i < N; i++) cin >> cows[i];
    sort(cows, cows + N);
    
    int cnt = 0, dst = 12, floor[100005];
    vector<int> jumps;
    floor[0] = cows[0] - (cows[0] % 12);
    if (floor[0] != 0) {
        cnt++;
        jumps.push_back(floor[0]);
    }
    for (int i = 1; i < N; i++) {
        floor[i] = cows[i] - (cows[i] % 12);
        if (floor[i] - floor[i - 1] >= 24) {
            jumps.push_back(floor[i] - floor[i - 1] - 12);
            dst += 12;
            cnt++;
        }
        else if (floor[i] - floor[i - 1] == 12) dst += 12;
        else continue;
    }
    
    sort(jumps.begin(), jumps.end());
    
    int idx = 0;
    while (cnt >= K) {
        cnt--;
        dst += jumps[idx];
        idx++;
    }
    
    cout << dst << '\n';
    
    return 0;
}
