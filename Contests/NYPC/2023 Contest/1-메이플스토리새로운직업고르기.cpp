#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    unordered_set<string> available;
    for (int i = 0; i < N; i++) {
        string character;
        cin >> character;

        available.insert(character);
    }

    int K;
    cin >> K;
    for (int i = 0; i < K; i++) {
        string character;
        cin >> character;

        available.erase(character);
    }

    cout << available.size() << '\n';
    for (string character : available) cout << character << '\n';
    cout << '\n';

    return 0;
}
