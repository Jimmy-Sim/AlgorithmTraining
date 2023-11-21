#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N;
	cin >> N;
    
    int hooves[100005] = {}, papers[100005] = {}, scissors[100005] = {};
	for (int i = 1; i <= N; i++) {
		hooves[i] += hooves[i - 1], papers[i] += papers[i - 1], scissors[i] += scissors[i - 1];

		char gesture;
		cin >> gesture;
        
		if (gesture == 'H') papers[i]++;
        else if (gesture == 'P') scissors[i]++;
        else if (gesture == 'S') hooves[i]++;
	}

	int ans = 0;
	for (int i = 1; i <= N; i++) {
		int before = max(hooves[i], max(papers[i], scissors[i])), after = max(hooves[N] - hooves[i], max(papers[N] - papers[i], scissors[N] - scissors[i]));
		ans = max(ans, before + after);
	}

	cout << ans << '\n';
    
    return 0;
}
