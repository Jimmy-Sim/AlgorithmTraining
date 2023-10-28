#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int N, M;
	cin >> N >> M;
    
    long long count[1001] = {}, sum = 0;
	for (int i = 0; i < N; i++) {
		int a;
        cin >> a;
        
		sum += a;
		count[sum % M]++;
	}

    long long ans = 0;
	for (int i = 0; i <= 1000; i++) ans += count[i] * (count[i] - 1) / 2;
    
    ans += count[0];
	
	cout << ans << '\n';
    
    return 0;
}
