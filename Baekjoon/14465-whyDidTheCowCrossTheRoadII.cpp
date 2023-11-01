#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int N, K, B;
	cin >> N >> K >> B;
    
    int crosswalks[100005];
    for (int i = 1; i <= 100000; i++) crosswalks[i] = 1;

	for (int i = 0; i < B; i++) {
		int brokenID;
		cin >> brokenID;
		
        crosswalks[brokenID]--;
	}

	for (int i = 2; i <= N; i++) crosswalks[i] += crosswalks[i - 1];

	int maxID = 0;
	for (int i = K; i <= N; i++) maxID = max(maxID, crosswalks[i] - crosswalks[i - K]);

    int ans = K - maxID;
    
	cout << ans << '\n';
    
	return 0;
}
