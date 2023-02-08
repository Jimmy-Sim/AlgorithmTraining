#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int N;
unordered_set<string> office;
vector<string> inOffice;

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++) {
        string employee, status;
        cin >> employee >> status;
        if (status == "enter") office.insert(employee);
        else office.erase(employee);
    }

    for (string employee : office) inOffice.push_back(employee);
    sort(&inOffice[0], &inOffice[inOffice.size()]);

    for (int i = inOffice.size() - 1; i >= 0; i--) cout << inOffice[i] << '\n';

    return 0;
}