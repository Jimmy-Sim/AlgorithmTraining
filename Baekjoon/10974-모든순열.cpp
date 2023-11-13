#include <iostream>

using namespace std;

int N, numbers[10], visited[10];

void solve(int idx) {
    if (idx == N) {
        for (int i = 0; i < N; i++) cout << numbers[i] << ' ';
        cout << '\n';
        
        return;
    }
    
    for (int i = 0; i < N; i++) {
        if (!visited[i]) {
            visited[i] = true;
            numbers[idx] = i + 1;
            solve(idx + 1);
            visited[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    cin >> N;
    
    solve(0);
    
    return 0;
}
