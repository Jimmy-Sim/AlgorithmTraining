#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    double bmi = (double)a / (b * b);
	    
	    if (bmi <= 18) cout << 1 << '\n';
	    else if (bmi <= 24) cout << 2 << '\n';
	    else if (bmi <= 29) cout << 3 << '\n';
	    else cout << 4 << '\n';
	}
	
	return 0;
}