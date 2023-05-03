#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    cout << min(a / 2, b) << '\n';
	}
	
	return 0;
}