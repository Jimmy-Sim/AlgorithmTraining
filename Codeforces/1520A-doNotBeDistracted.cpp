#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char tasks[55];
        cin >> tasks;

        int taskCheck[30] = {};
        for (int i = 0; i < n; i++) {
            if (tasks[i] != tasks[i - 1]) taskCheck[tasks[i] - 65]++;
        }

        bool distracted = false;
        for (int i = 0; i < 26; i++) {
            if (taskCheck[i] > 1) {
                distracted = true;
                break;
            }
        }

        if (distracted) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}