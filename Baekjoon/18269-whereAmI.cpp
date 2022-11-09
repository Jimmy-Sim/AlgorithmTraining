#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    string sequence;
    cin >> sequence;

    int count = 1;
    for (int i = 0; i < N; i++) {
        if (i == 0) {
            continue;
        }
        if (sequence[i] == sequence[i - 1]) {
            count++;
        }
    }
    if (count == N) {
        cout << N << "\n";
    }

    else {
        for (int i = 1; i < N; i++) {
            string K = sequence.substr(0, i);
            int count = 0;
            for (int j = i; j < N - i + 1; j++) {
                string L = sequence.substr(j, i);
                if (K == L) {
                    count++;
                }
            }

            if (count == 0) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}