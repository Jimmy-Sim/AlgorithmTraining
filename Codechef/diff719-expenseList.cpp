#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    int total = 1;
	    while (b--) total *= 2;
	    while (a--) total -= 0.5 * total;
	    
	    cout << total << '\n';
	}
	
	return 0;
}