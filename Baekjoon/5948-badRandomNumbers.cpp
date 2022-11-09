#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int N;
    cin >> N;

    int overlapCheck[10005] = {}, middleNum = 0, count = 0;

    while (overlapCheck[N] <= 1) {
        int onesD = N % 10, tensD = (N / 10) % 10, hundredsD = (N / 100) % 10, thousandsD = N / 1000;
        
        if (N / 100 > 0) {
            middleNum = (10 * hundredsD) + tensD;
        }
        else if (N / 10 > 0) {
            middleNum = tensD;
        }
        else {
            middleNum = 0;
        }

        N = middleNum * middleNum;
        overlapCheck[N]++;
        count++;
    }

    cout << count << "\n";

    return 0;
}