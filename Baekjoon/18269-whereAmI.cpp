#include <iostream>

using namespace std;

int N;
string mailboxes;
int maxFound;
int ans;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N >> mailboxes;

    for (int i = 0; i < N; i++) {
        int x = 1;
        for (int j = i; j < N; j++) {
            string substring = mailboxes.substr(i, x);
            bool found = false;
            
            for (int k = 0; k <= N - x; k++) {
                if (k == i) continue;

                string checkSubstring = mailboxes.substr(k, x);

                if (substring == checkSubstring) {
                    found = true;
                    break;
                }
            }

            if (found) maxFound = x > maxFound ? x : maxFound;

            x++;
        }
    }

    ans = maxFound + 1;

    cout << ans << "\n";

    return 0;
}