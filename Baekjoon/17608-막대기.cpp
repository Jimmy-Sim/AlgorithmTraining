#include <iostream>
#include <stack>

using namespace std;

int N;
stack<int> sticks;
int ans;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        int height;
        cin >> height;

        sticks.push(height);
    }

    int lastHeight = 0;

    for (int i = 0; i < N; i++) {
        if (sticks.top() > lastHeight) {
            ans++;
            lastHeight = sticks.top();
        }

        sticks.pop();
    }

    cout << ans << '\n';

    return 0;
}