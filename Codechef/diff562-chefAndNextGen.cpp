#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    if (a * b <= c * d) cout << "Yes\n";
	    else cout << "No\n";
	}
	
	return 0;
}