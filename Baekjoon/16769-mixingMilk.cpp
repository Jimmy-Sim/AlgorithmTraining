#include <iostream>

using namespace std;

int C1, M1;
int C2, M2;
int C3, M3;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> C1 >> M1;
    cin >> C2 >> M2;
    cin >> C3 >> M3;

    for (int i = 1; i <= 4; i++) {
        if (i % 3 == 1) {
            if (M1 + M2 > C2) {
                int diff = C2 - M2;
                M2 = C2;
                M1 -= diff;
            }
            else {
                M2 += M1;
                M1 = 0;
            }
        }
        else if (i % 3 == 2) {
            if (M2 + M3 > C3) {
                int diff = C3 - M3;
                M3 = C3;
                M2 -= diff;
            }
            else {
                M3 += M2;
                M2 = 0;
            }
        }
        else {
            if (M3 + M1 > C1) {
                int diff = C1 - M1;
                M1 = C1;
                M3 -= diff;
            }
            else {
                M1 += M3;
                M3 = 0;
            }
        }
    }

    cout << M1 << "\n";
    cout << M2 << "\n";
    cout << M3 << "\n";

    return 0;
}