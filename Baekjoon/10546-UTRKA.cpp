#include <iostream>
#include <set>

using namespace std;

int N;
multiset<string> registered, competed;
string ans;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        string participant;
        cin >> participant;

        registered.insert(participant);
    }
    for (int i = 0; i < N - 1; i++) {
        string participant;
        cin >> participant;

        competed.insert(participant);
    }

    for (string participant : registered) {
        if (competed.count(participant) != registered.count(participant)) {
            ans = participant;
            break;
        }
    }

    cout << ans << '\n';

    return 0;
}