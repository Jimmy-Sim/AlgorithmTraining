#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    int score = 3 * b - (a - b);
	    
	    if (score >= c) cout << "PASS\n";
	    else cout << "FAIL\n";
	}
	
	return 0;
}