#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 105;

int N;
int cows[MAX], groupNum[MAX];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) cin >> cows[i];

    sort(&cows[0], &cows[N]);

    int index = 1, group = 1;
    groupNum[0] = group, groupNum[1] = group;

    while (index < N - 1) {
        int cow = cows[index], leftCow = cows[index - 1], rightCow = cows[index + 1];

        if (rightCow - cow > cow - leftCow) {
            group++;
        }

        groupNum[index + 1] = group;

        index++;
    }

    for (int i = 0; i < N; i++) cout << groupNum[i] << " ";

    return 0;
}