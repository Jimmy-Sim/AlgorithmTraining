#include <bits/stdc++.h>

using namespace std;

struct Line {
    int x, y;
};

bool cmp(Line a, Line b) {
    if (a.x == b.x) return a.y < b.y;

    return a.x < b.x;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;

    Line lines[1000005];
    for (int i = 0; i < N; i++) cin >> lines[i].x >> lines[i].y;

    sort(lines, lines + N, cmp);
    lines[N].x = 1000005, lines[N].y = 1000005;

    int sum = 0, start = lines[0].x, end = lines[0].y;
    for (int i = 1; i < N; i++) {
        if (lines[i].x <= end) end = max(end, lines[i].y);
        else {
            sum += (end - start);
            start = lines[i].x, end = lines[i].y;
        }
    }
    sum += (end - start);

    cout << sum << '\n';

    return 0;
}
