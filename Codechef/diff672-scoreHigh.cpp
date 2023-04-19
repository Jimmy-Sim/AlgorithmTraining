#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    cout << max(a, max(b, max(c, d))) << '\n';
	}
	
	return 0;
}