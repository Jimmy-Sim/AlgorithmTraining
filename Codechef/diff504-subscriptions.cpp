#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    int dv = 0;
	    if (a % 6 != 0) dv++;
	    
	    cout << (dv + (a / 6)) * b << '\n';
	}
	
	return 0;
}