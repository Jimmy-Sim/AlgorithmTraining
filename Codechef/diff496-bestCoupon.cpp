#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    cout << max(n / 10, 100) << '\n';
	}
	
	return 0;
}