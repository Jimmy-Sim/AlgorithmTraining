#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    cout << (1.1 * a - a) + b << '\n';
	}
	
	return 0;
}