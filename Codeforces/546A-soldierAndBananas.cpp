#include <iostream>

using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    long long totalPrice = 0, updatedPrice = k;
    for (int i = 0; i < w; i++) {
        totalPrice += updatedPrice; 
        updatedPrice += k;       
    }

    if (totalPrice - n <= 0) cout << 0 << '\n';
    else cout << totalPrice - n << '\n';

    return 0;
}