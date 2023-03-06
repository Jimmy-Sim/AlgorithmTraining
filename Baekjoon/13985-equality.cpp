#include <iostream>

using namespace std;

int a, b, sum;
char plusSign, equals;

int main()
{
    cin >> a >> plusSign >> b >> equals >> sum;

    if (a + b == sum) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}