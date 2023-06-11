#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int numbers[105], mn = 105;
	    for (int i = 0; i < n; i++) {
	        cin >> numbers[i];
	        mn = numbers[i] < mn ? numbers[i] : mn;
	    }
	    
	    int cnt = 0;
	    for (int i = 0; i < n; i++) {
	        if (numbers[i] > mn) cnt++;
	    }
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}