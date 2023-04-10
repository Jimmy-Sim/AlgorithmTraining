#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    if (n % 25 != 0) cout << n / 25 + 1 << '\n';
	    else cout << n / 25 << '\n';
	}
	
	return 0;
}