#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int N;
	cin >> N;

	int buildings[55];
    for (int i = 0; i < N; i++) cin >> buildings[i];
    

    int count[55] = {};
	for (int i = 0; i < N - 1; i++) {
        double maxHeight = -9999999999;
		for (int j = i + 1; j < N; j++) {
			double height = (double)(buildings[j] - buildings[i]) / (j - i);
            
			if (height > maxHeight) {
				count[i]++, count[j]++;
				maxHeight = height;
			}
		}
	}

    int ans = 0;
    for (int i = 0; i < N; i++) ans = max(ans, count[i]);

    cout << ans << '\n';
    
	return 0;
}
