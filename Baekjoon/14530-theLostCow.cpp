#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int x, y;
    cin >> x >> y;

    int cnt = 0, turn = 0;
    double mult = 0.5;
    while (x != y) {
        if (turn % 2 == 0) {
            if (turn == 0) x++, cnt++;
            else if (x < y && y - x < 3 * mult) {
                cnt += (y - x);
                break;
            }
            else x += (3 * mult), cnt += (3 * mult);
        }
        else {
            if (x > y && x - y < 3 * mult) {
                cnt += (x - y);
                break;
            }
            else x -= (3 * mult), cnt += (3 * mult);
        }
        
        turn++, mult *= 2;
    }

    cout << cnt << '\n';
    
    return 0;
}
