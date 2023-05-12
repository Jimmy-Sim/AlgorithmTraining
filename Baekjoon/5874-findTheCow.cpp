#include <iostream>

using namespace std;

int main()
{
    string ridge;
    cin >> ridge;

    int cnt = 0, total = 0;
    for (int i = 0; i < ridge.size() - 1; i++) {
        if (ridge[i] == '(' && ridge[i + 1] == '(') cnt++;
        else if (ridge[i] == ')' && ridge[i + 1] == ')') total += cnt;
    }

    cout << total << '\n';

    return 0;
}