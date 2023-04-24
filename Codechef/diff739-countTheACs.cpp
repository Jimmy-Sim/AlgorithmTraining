#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n / 100 + n % 100 <= 10) cout << n / 100 + n % 100 << '\n';
	    else cout << -1 << '\n';
	}
	
	return 0;
}