#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    while (n > 0) {
        if (n - 1 == 0 || n - 2 == 0 || n - 3 == 0 || n - 4 == 0 || n - 5 == 0) {
            count++;
            break;
        }
        n -= 5;
        count++;
    }

    cout << count << '\n';

    return 0;
}