#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    cout << c * min(10 * a, b) << '\n';
	}
	
	return 0;
}