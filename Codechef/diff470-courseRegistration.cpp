#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (a + c <= b) cout << "Yes\n";
	    else cout << "No\n";
	}
	
	return 0;
}