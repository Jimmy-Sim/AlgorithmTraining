#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 100005;

int N, M;
int searchArr[MAX], numArr[MAX];

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> searchArr[i];
    sort(&searchArr[0], &searchArr[N]);

    cin >> M;
    for (int i = 0; i < M; i++) cin >> numArr[i];

    for (int i = 0; i < M; i++) {
        int num = numArr[i];

        int left = 0, right = N - 1;
        bool found = false;
        while (left <= right) {
            int middle = left + (right - left) / 2, searchNum = searchArr[middle];

            if (searchNum == num) {
                found = true;
                break;
            }
            else if (searchNum > num) right = middle - 1;
            else left = middle + 1;
        }

        cout << found << "\n";
    }

    return 0;
}