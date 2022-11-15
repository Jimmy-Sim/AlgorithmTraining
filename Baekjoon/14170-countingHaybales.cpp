/*#include <iostream>

using namespace std;

const int MAX = 1000000001;

int N, Q;
int farm[MAX], queries[MAX][5];
int haybalePrefSum[MAX];

int main()
{
    cin >> N >> Q;
    for (int i = 0; i < N; i++) {
        int position;
        cin >> position;
        farm[position]++;
    }
    for (int i = 0; i < Q; i++) cin >> queries[i][1] >> queries[i][2];

    for (int i = 0; i <= 1000000000; i++) {
        if (farm[i] > 0) haybalePrefSum[i]++;
        haybalePrefSum[i] += haybalePrefSum[i - 1];
    }

    for (int i = 0; i < 10; i++) cout << haybalePrefSum[i] << " ";

    cout << "\n";

    return 0;
}*/

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

        cout << low << " " << high << "\n";
    }

    return 0;
}