#include <iostream>

using namespace std;

const int MAXIMUM = 105;

struct Point {
int x, y;
};

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, b;
    cin >> n >> b;

    Point input[MAXIMUM];
    for (int i = 0; i < n; i++) cin >> input[i].x >> input[i].y;

    int minBalance = 1000005;
    for (int i = 0; i < n; i++) {
        int xAxis = input[i].x + 1;
        for (int j = 0; j < n; j++) {
            int yAxis = input[j].y + 1;

            int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
            for (int k = 0; k < n; k++) {
                if (input[k].x > xAxis && input[k].y > yAxis) q1++;
                else if (input[k].x > xAxis && input[k].y < yAxis) q4++;
                else if (input[k].x < xAxis && input[k].y > yAxis) q2++;
                else q3++;
            }
            int balance = max(q1, max(q2, max(q3, q4)));

            minBalance = balance < minBalance ? balance : minBalance;
        }
    }

    cout << minBalance << "\n";
}