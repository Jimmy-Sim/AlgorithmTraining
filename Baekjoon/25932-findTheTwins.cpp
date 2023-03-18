#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++) {
        bool mack = false, zack = false;

        for (int j = 0; j < 10; j++) {
            int jerseyNumber;
            cin >> jerseyNumber;
            cout << jerseyNumber << ' ';

            if (jerseyNumber == 18) mack = true;
            else if (jerseyNumber == 17) zack = true;
        }

        if (mack && zack) cout << "\nboth\n\n";
        else if (mack) cout << "\nmack\n\n";
        else if (zack) cout << "\nzack\n\n";
        else cout << "\nnone\n\n";
    }

    return 0;
}