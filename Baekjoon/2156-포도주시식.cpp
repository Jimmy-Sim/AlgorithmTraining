#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
    cin >> N;
	
    int wine[10000];
	for (int i = 0; i < N; i++) cin >> wine[i];

    int drink[10000];
	drink[0] = wine[0];
	drink[1] = wine[0] + wine[1];
	drink[2] = max(drink[1], max(drink[0] + wine[2], wine[1] + wine[2]));

	for (int i = 3; i < N; i++) drink[i] = max(drink[i - 1], max(drink[i - 2] + wine[i], drink[i - 3] + wine[i - 1] + wine[i]));

	cout << drink[N - 1];

	return 0;
}
