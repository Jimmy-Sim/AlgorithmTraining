#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;
unordered_set<string> names;
vector<string> bothNames;

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        names.insert(name);
    }
    for (int i = 0; i < M; i++) {
        string name;
        cin >> name;
        if (names.count(name)) bothNames.push_back(name);
    }

    sort(&bothNames[0], &bothNames[bothNames.size()]);

    cout << bothNames.size() << '\n';
    for (int i = 0; i < bothNames.size(); i++) cout << bothNames[i] << '\n';

    return 0;
}