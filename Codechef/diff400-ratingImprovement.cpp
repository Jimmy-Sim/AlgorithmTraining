#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    if (b >= a && b <= a + 200) cout << "YES\n";
	    else cout << "NO\n";
	}
	
	return 0;
}