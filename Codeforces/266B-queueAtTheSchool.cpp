#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    char queue[55];
    cin >> queue;

    for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (queue[j] == 'B' && queue[j + 1] == 'G') {
                swap(queue[j], queue[j + 1]);
                j++;
            }
        }
    }

    cout << queue << '\n';

    return 0;
}