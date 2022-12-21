#include <iostream>

using namespace std;

int N, M;
int cycle = 0;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    if (N < 10) N *= 10;
    M = N;

    while (cycle == 0 || M != N) {
        int digitSum = (M / 10) + (M % 10);

        M = 10 * (M % 10) + (digitSum % 10);

        cycle++;
    }

    cout << cycle << "\n";
}