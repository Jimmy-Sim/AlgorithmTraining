#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100005;

int N, Q;
int haybales[MAX];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N >> Q;
    for (int i = 0; i < N; i++) cin >> haybales[i];
    sort(&haybales[0], &haybales[N]);

    for (int i = 0; i < Q; i++) {
        int start, end;
        cin >> start >> end;

        int low = lower_bound(haybales, haybales + N, start) - haybales;
        int high = upper_bound(haybales, haybales + N, end) - haybales;

        cout << high - low << "\n";
    }

    return 0;
}