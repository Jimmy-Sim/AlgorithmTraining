#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int bessie[1000005], total = 0;
    for (int i = 0; i < N; i++) {
        int speed, time;
        cin >> speed >> time;

        for (int j = total; j < total + time; j++) {
            if (j == 0) bessie[j] = speed;
            else bessie[j] = bessie[j - 1] + speed;
        }
        total += time;
    }
    int elsie[1000005];
    total = 0;
    for (int i = 0; i < M; i++) {
        int speed, time;
        cin >> speed >> time;

        for (int j = total; j < total + time; j++) {
            if (j == 0) elsie[j] = speed;
            else elsie[j] = elsie[j - 1] + speed;
        }
        total += time;
    }

    int leader, found, cnt = 0;
    for (int i = 0; i < total; i++) {
        if (bessie[i] > elsie[i]) {
            leader = 1;
            found = i;
            break;
        }
        if (bessie[i] < elsie[i]) {
            leader = 2;
            found = i;
            break;
        }
    }

    for (int i = found + 1; i < total; i++) {
        if (leader == 1 && bessie[i] < elsie[i]) {
            cnt++;
            leader = 2;
        }
        else if (leader == 2 && bessie[i] > elsie[i]) {
            cnt++;
            leader = 1;
        }
    }

    cout << cnt << '\n';

    return 0;
}