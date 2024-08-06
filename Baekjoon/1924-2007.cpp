#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cout.tie(nullptr);

    int month, day;
    cin >> month >> day;

    // Conditional statements:
    /*
    int days[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int sum = day;
    for (int i = 1; i < month; i++) sum += days[i];

    if (sum % 7 == 1) cout << "MON\n";
    else if (sum % 7 == 2) cout << "TUE\n";
    else if (sum % 7 == 3) cout << "WED\n";
    else if (sum % 7 == 4) cout << "THU\n";
    else if (sum % 7 == 5) cout << "FRI\n";
    else if (sum % 7 == 6) cout << "SAT\n";
    else cout << "SUN\n";
    */

    // Days of the week in a list (more efficient):
    int months[15] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[10] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int sum = day;
    for (int i = 1; i < month; i++) sum += months[i];

    cout << days[sum % 7];
    
    return 0;
}
