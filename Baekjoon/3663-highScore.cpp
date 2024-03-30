#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
	int T;
	cin >> T;
    
	while (T--) {
        string name;
		cin >> name;
        
		int ans = 0, cnt = INT32_MAX;
		for (int i = 0; i < name.size(); i++) {
			ans += min(name[i] - 'A', 'Z' - name[i] + 1);
			if (name[i] != 'A') name[i] = 'B';
		}

		for (int i = 0, j; i < name.size(); i++) {
			j = find(name.begin() + i + 1, name.end(), 'B') - name.begin();
			
            int left = i + (name.size() - j) * 2, right = i * 2 + name.size() - j;
			cnt = min(cnt, min(left, right));
		}
        
		cout << ans + cnt << '\n';
	}
    
    return 0;
}
