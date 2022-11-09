#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    queue<int> q;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            q.push(i);
        }
    }

    if (K > q.size()) {
        cout << 0 << "\n";
    }
    else {
        for (int i = 1; i < K; i++) {
            q.pop();
        }

        cout << q.front() << "\n";
    }

    return 0;
}