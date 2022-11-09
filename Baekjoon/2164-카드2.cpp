#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    queue<int> D;
    
    for (int i = 1; i <= N; i++) {
        D.push(i);
    }

    while (D.size() > 1) {
        D.pop();
        D.push(D.front());
        D.pop();
    }

    cout << D.front() << "\n";

    return 0;
}