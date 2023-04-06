#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (b <= a * 1.07) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}