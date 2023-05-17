#include <iostream>

using namespace std;

int main()
{
    int B, E;
    cin >> B >> E;

    int bessiePosition[1000005] = {}, bessieIdx = 1;
    for (int i = 0; i < B; i++) {
        int unit;
        char direction;
        cin >> unit >> direction;

        for (int j = 0; j < unit; j++) {
            if (direction == 'L') bessiePosition[bessieIdx] = bessiePosition[bessieIdx - 1] - 1;
            else bessiePosition[bessieIdx] = bessiePosition[bessieIdx - 1] + 1;
            bessieIdx++;
        }
    }
    int elsiePosition[1000005] = {}, elsieIdx = 1;
    for (int i = 0; i < E; i++) {
        int unit;
        char direction;
        cin >> unit >> direction;

        for (int j = 0; j < unit; j++) {
            if (direction == 'L') elsiePosition[elsieIdx] = elsiePosition[elsieIdx - 1] - 1;
            else elsiePosition[elsieIdx] = elsiePosition[elsieIdx - 1] + 1;
            elsieIdx++;
        }
    }

    if (bessieIdx > elsieIdx) {
        for (int i = elsieIdx; i < bessieIdx; i++) elsiePosition[i] = elsiePosition[i - 1];
    }
    else if (bessieIdx < elsieIdx) {
        for (int i = bessieIdx; i < elsieIdx; i++) bessiePosition[i] = bessiePosition[i - 1];
    }

    for (int i = 0; i < max(bessieIdx, elsieIdx); i++) cout << bessiePosition[i] << ' ';
    cout << '\n';
    for (int i = 0; i < max(bessieIdx, elsieIdx); i++) cout << elsiePosition[i] << ' ';
    cout << '\n';

    int cnt = 0;
    for (int i = 1; i < max(bessieIdx, elsieIdx); i++) {
        if (i == 1) {
            if (bessiePosition[i] == elsiePosition[i]) cnt++;
        }
        else if (bessiePosition[i] == elsiePosition[i] && bessiePosition[i - 1] != elsiePosition[i - 1]) cnt++;
    }

    cout << cnt << '\n';

    return 0;
}