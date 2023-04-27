#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    if (b % c == 0) cout << (b / c) * a << '\n';
	    else cout << (b / c + 1) * a << '\n';
	}
	
	return 0;
}