#include <iostream>

using namespace std;

int N;
string mailboxes, testString;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    cin >> mailboxes;

    for (int i = 0; i < N; i++) {
        testString += mailboxes[i];
        int stringLength = i + 1, count = 0;

        for (int j = i + 1; j < N - i; j++) {
            string checkString = mailboxes.substr(j, stringLength);

            if (checkString == testString) count++;
        }

        if (count == 0) {
            cout << stringLength << "\n";
            break;
        }
    }

    return 0;
}