#include <iostream>

using namespace std;

int N;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << "Case #" << i << ": ";
        
        int colors[5][5];
        for (int j = 1; j <= 3; j++) {
            for (int k = 1; k <= 4; k++) cin >> colors[j][k];
        }
        int minCyan = min(colors[1][1], min(colors[2][1], colors[3][1])), minMagenta = min(colors[1][2], min(colors[2][2], colors[3][2])), minYellow = min(colors[1][3], min(colors[2][3], colors[3][3])), minBlack = min(colors[1][4], min(colors[2][4], colors[3][4]));
        int sum = minCyan + minMagenta + minYellow + minBlack;
        
        if (sum < 1000000) {
            cout << "IMPOSSIBLE\n";
            continue;
        }

        int difference = sum - 1000000;

        while (difference > 0) {
            int maxColor = max(minCyan, max(minMagenta, max(minYellow, minBlack)));

            if (maxColor - difference >= 0) {
                if (maxColor == minCyan) minCyan -= difference;
                else if (maxColor == minMagenta) minMagenta -= difference;
                else if (maxColor == minYellow) minYellow -= difference;
                else minBlack -= difference;
                break;
            }
            else {
                if (maxColor == minCyan) minCyan = 0;
                else if (maxColor == minMagenta) minMagenta = 0;
                else if (maxColor == minYellow) minYellow = 0;
                else minBlack = 0;
                difference -= maxColor;
            }

            sum = minCyan + minMagenta + minYellow + minBlack;
            difference = sum - 1000000;
        }

        cout << minCyan << ' ' << minMagenta << ' ' << minYellow << ' ' << minBlack << '\n';
    }

    return 0;
}