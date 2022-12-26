#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 500005;

int N, M;
int searchArr[MAX], numArr[MAX];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) cin >> searchArr[i];
    sort(&searchArr[0], &searchArr[N]);
    cin >> M;
    for (int i = 0; i < M; i++) cin >> numArr[i];

    for (int i = 0; i < M; i++) {
        int num = numArr[i];
        int left = lower_bound(&searchArr[0], &searchArr[N], num) - &searchArr[0];
        int right = upper_bound(&searchArr[0], &searchArr[N], num) - &searchArr[0];

        int count = right - left;

        cout << count << ' ';
    }

    cout << '\n';

    return 0;
}