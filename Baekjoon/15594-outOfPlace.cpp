#include <iostream>

using namespace std;

const int MAX = 105, MAXIMUM = 1000005;

int N, cows[MAX];
int bessieIndex;
int ans;

void firstIndex()
{
    int index = 1, gap = 1;

    while (true) {
        if (cows[bessieIndex] >= cows[bessieIndex - 1] && cows[bessieIndex] <= cows[bessieIndex + 1]) break;

        if (cows[index] == cows[index + 1]) {
            index++;
            gap++;
            continue;
        }
        else {
            swap(cows[bessieIndex], cows[index]);
            index++;
            bessieIndex += gap;
            gap = 1;
            ans++;
        }
    }
}

void lastIndex()
{
    int index = bessieIndex - 1, gap = 1;

    while (true) {
        if (cows[bessieIndex] >= cows[bessieIndex - 1] && cows[bessieIndex] <= cows[bessieIndex + 1]) break;

        if (cows[index] == cows[index - 1]) {
            index--;
            gap++;
            continue;
        }
        else {
            swap(cows[bessieIndex], cows[index]);
            index--;
            bessieIndex -= gap;
            gap = 1;
            ans++;
        }
    }
}

void betweenIndex()
{
    int index, gap = 1;

    if (cows[bessieIndex] > cows[bessieIndex - 1] && cows[bessieIndex] > cows[bessieIndex + 1]) {
        index = bessieIndex + 1;

        while (true) {
            if (cows[bessieIndex] >= cows[bessieIndex - 1] && cows[bessieIndex] <= cows[bessieIndex + 1]) break;

            if (cows[index] == cows[index + 1]) {
                index++;
                gap++;
                continue;
            }
            else {
                swap(cows[bessieIndex], cows[index]);
                index++;
                bessieIndex += gap;
                gap = 1;
                ans++;
            }
        }
    }

    else {
        index = bessieIndex - 1;

        while (true) {
            if (cows[bessieIndex] >= cows[bessieIndex - 1] && cows[bessieIndex] <= cows[bessieIndex + 1]) break;

            if (cows[index] == cows[index - 1]) {
                index--;
                gap++;
                continue;
            }
            else {
                swap(cows[bessieIndex], cows[index]);
                index--;
                bessieIndex -= gap;
                gap = 1;
                ans++;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++) cin >> cows[i];
    cows[N] = 1000001;

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            if (cows[i] > cows[i + 1]) {
                bessieIndex = i;
                break;
            }
        }
        else if (i == N - 1) {
            if (cows[i] < cows[i - 1]) bessieIndex = i;
        }
        else {
            if (cows[i] < cows[i - 1] && cows[i + 1] >= cows[i - 1] || cows[i] > cows[i + 1] && cows[i + 1] >= cows[i - 1]) {
                bessieIndex = i;
                break;
            }
        }
    }

    if (bessieIndex == 0) firstIndex();
    else if (bessieIndex == N - 1) lastIndex();
    else betweenIndex();

    cout << ans << "\n";

    return 0;
}