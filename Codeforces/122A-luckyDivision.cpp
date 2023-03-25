#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;
    
    int luckyNumbers[10] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};
    bool isLucky = false;
    for (int i = 0; i < 10; i++) {
        if (number == luckyNumbers[i] || number % luckyNumbers[i] == 0) {
            isLucky = true;
            break;
        }
    }

    if (isLucky) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}