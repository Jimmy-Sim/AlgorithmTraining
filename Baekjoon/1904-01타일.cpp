#include <iostream>

using namespace std;

int N;
int cases[1000005], X = 15746;
int ans;

int main()
{
    cin >> N;
    
    cases[1] = 1, cases[2] = 2;

    for (int i = 3; i <= N; i++) {
        cases[i] = (cases[i - 2] + cases[i - 1]) % X;
    }

    ans = cases[N];

    cout << ans << "\n";

    return 0;
}