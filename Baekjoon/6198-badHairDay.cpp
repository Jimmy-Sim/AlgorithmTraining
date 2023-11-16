#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N;
    cin >> N;
    
    stack<int> s;
    long long answer = 0;

    for (int i = 0; i < N; i++) {
        int height;
        cin >> height;

        if (s.empty()) {
            s.push(height);
            continue;
        }

        while (!s.empty() && s.top() <= height) s.pop();

        answer += s.size();

        s.push(height);
    }

    cout << answer;
}
