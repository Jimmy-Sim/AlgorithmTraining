#include <iostream>

using namespace std;

int main()
{
    int envelopeNum;
    cin >> envelopeNum;

    while (envelopeNum != 0) {
        int left = 1, right = 50;
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (mid == envelopeNum) {
                cout << mid << "\n";
                break;
            }
            else if (mid > envelopeNum) right = mid - 1;
            else left = mid + 1;

            cout << mid << " ";
        }

        cin >> envelopeNum;
    }

    return 0;
}