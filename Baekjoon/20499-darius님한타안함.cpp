#include <iostream>

using namespace std;

int K, D, A;
char slash;

int main()
{
    cin >> K >> slash >> D >> slash >> A;

    if (K + A < D || D == 0) cout << "hasu\n";
    else cout << "gosu\n";

    return 0;
}