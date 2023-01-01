#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 5000005;

int N, K;
int arr[MAX];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N >> K;
    for (int i = 0; i < N; i++) cin >> arr[i];

    sort(&arr[0], &arr[N]);

    cout << arr[K - 1] << '\n';

    return 0;
}