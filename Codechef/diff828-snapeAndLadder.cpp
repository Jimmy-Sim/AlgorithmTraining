#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    cout << sqrt(b * b - a * a) << ' ' << sqrt(a * a + b * b) << '\n';
	}
	
	return 0;
}