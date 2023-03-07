#include <iostream>

using namespace std;


int t1, f1, s1, p1, c1, total1;
int t2, f2, s2, p2, c2, total2;

int main()
{
    cin >> t1 >> f1 >> s1 >> p1 >> c1;
    cin >> t2 >> f2 >> s2 >> p2 >> c2;
    total1 = 6 * t1 + 3 * f1 + 2 * s1 + p1 + 2 * c1;
    total2 = 6 * t2 + 3 * f2 + 2 * s2 + p2 + 2 * c2;

    cout << total1 << ' ' << total2 << '\n';

    return 0;
}