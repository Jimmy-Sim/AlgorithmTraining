#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    int cnt = 0, increment = 1;
	    while (a > b) {
	        b += increment;
	        cnt++;
	        increment++;
	    }
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}