#include <iostream>

using namespace std;

const int MAX = 10005;

int N, K;
int lanCables[MAX], maxCable;

int main()
{
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> lanCables[i];

        maxCable = lanCables[i] > maxCable ? lanCables[i] : maxCable;
    }

    int length = maxCable / K;
    while (true) {
        int count = 0;

        for (int i = 0; i < N; i++) {
            count += lanCables[i] / length;
        }

        if (count < K) break;

        length++;
    }

    length--;

    cout << length << '\n';

    return 0;
}