#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int N;
    cin >> N;

    unordered_map<string, string> check;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        string city, state;
        cin >> city >> state;

        string cityInitial = "";
        cityInitial += city[0], cityInitial += city[1];

        cout << check[state] << '\n';

        if (check[state] == cityInitial) cnt++;
        check[cityInitial] = state;
    }

    cout << cnt << '\n';

    return 0;
}