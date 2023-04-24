#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    int cnt = 2;
	    if (a == c || a == d) cnt--;
	    if (b == c || b == d) cnt--;
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}