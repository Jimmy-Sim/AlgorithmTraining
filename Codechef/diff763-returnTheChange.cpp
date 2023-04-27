#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n % 10 >= 5) cout << 100 - (10 * (n / 10) + 10) << '\n';
	    else cout << 100 - (10 * (n / 10)) << '\n';
	}
	
	return 0;
}