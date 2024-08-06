#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    unordered_map<string, int> log;
    log["Bessie"] = 0, log["Elsie"] = 0, log["Daisy"] = 0, log["Gertie"] = 0, log["Annabelle"] = 0, log["Maggie"] = 0, log["Henrietta"] = 0;
    
    for (int i = 0; i < N; i++) {
        string cow;
        int amount;
        cin >> cow >> amount;

        log[cow] += amount;
    }

    int minAmount = 10005;
    for (const auto& cow : log) minAmount = min(cow.second, minAmount);

    int secondMin = 10005;
    string name = "Tie";
    for (const auto& cow : log) {
        if (cow.second != minAmount) {
            if (cow.second < secondMin) {
                secondMin = cow.second;
                name = cow.first;
            }
            else if (cow.second == secondMin) name = "Tie";
        }
    }

    cout << name << '\n';
    
    return 0;
}
