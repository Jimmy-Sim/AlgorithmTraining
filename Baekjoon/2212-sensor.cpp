#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
  int N, K;
	cin >> N >> K;
	
    int sensors[10005];
	for (int i = 0; i < N; i++) cin >> sensors[i];
	
	sort(&sensors[0], &sensors[N]);
	
	int distances[10005];
	for (int i = 0; i < N - 1; i++) distances[i] = sensors[i + 1] - sensors[i];
	
	sort(&distances[0], &distances[N - 1]);
	
	int ans = 0;
	
	for (int i = 0; i < N - K; i++) ans += distances[i];
		
	cout << ans << '\n';
	
	return 0;
}
