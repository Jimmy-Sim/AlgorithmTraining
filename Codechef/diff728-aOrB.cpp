#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    int aFirst, bFirst;
	    aFirst = 500 - a * 2 + 1000 - (a + b) * 4;
	    bFirst = 1000 - b * 4 + 500 - (a + b) * 2;
	    
	    cout << max(aFirst, bFirst) << '\n';
	}
	
	return 0;
}