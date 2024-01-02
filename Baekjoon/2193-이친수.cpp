#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
	long long pinaryNumbers[91];
	
	cin >> N;

	pinaryNumbers[0] = 0, pinaryNumbers[1] = 1, pinaryNumbers[2] = 1;
	for (int i = 3; i <= N; i++) pinaryNumbers[i] = pinaryNumbers[i - 1] + pinaryNumbers[i - 2];

	cout << pinaryNumbers[N] << '\n';

	return 0;
}
