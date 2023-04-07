#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n <= 100) cout << n << '\n';
	    else if (n <= 1000) cout << n - 25 << '\n';
	    else if (n <= 5000) cout << n - 100 << '\n';
	    else cout << n - 500 << '\n';
	}
	
	return 0;
}