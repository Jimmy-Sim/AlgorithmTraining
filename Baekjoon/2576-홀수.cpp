#include <iostream>

using namespace std;

int main()
{
    int oddSum = 0, minOddNum = 100;
    for (int i = 0; i < 7; i++) {
        int num;
        cin >> num;

        if (num % 2 == 1) {
            oddSum += num;
            minOddNum = num < minOddNum ? num : minOddNum;
        }
    }

    if (minOddNum == 100) {
        cout << -1 << "\n";
    }
    else {
        cout << oddSum << "\n";
        cout << minOddNum << "\n";
    }
    
    return 0;
}