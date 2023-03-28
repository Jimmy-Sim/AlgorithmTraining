#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int antonCount = 0, danikCount = 0;
    for (int i = 0; i < n; i++) {
        char winner;
        cin >> winner;

        if (winner == 'A') antonCount++;
        else danikCount++;
    }

    if (antonCount > danikCount) cout << "Anton\n";
    else if (antonCount < danikCount) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}