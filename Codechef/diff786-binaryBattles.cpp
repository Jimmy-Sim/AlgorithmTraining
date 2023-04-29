#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    long long a;
	    int b, c;
	    cin >> a >> b >> c;
	    
	    int tm = 0;
	    while (a > 1) {
	        a /= 2;
	        tm += (b + c);
	    }
	    
	    tm -= c;
	    
	    cout << tm << '\n';
	}
	
	return 0;
}