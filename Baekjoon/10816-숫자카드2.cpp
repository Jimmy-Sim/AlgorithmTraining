#include <iostream>

using namespace std;

const int MAX = 20000005;

int N, M;
int searchArr[MAX], numArr[MAX];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        searchArr[num + 10000000]++;
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;

        cout << searchArr[num + 10000000] << ' ';
    }

    cout << '\n';

    return 0;
}