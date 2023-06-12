#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int cnt = 0;
	    if (n / 100 > 0) {
	        cnt += n / 100;
	        n -= 100 * (n / 100);
	    }
	    if (n / 50 > 0) {
	        cnt += n / 50;
	        n -= 50 * (n / 50);
	    }
	    if (n / 10 > 0) {
	        cnt += n / 10;
	        n -= 10 * (n / 10);
	    }
	    if (n / 5 > 0) {
	        cnt += n / 5;
	        n -= 5 * (n / 5);
	    }
	    if (n / 2 > 0) {
	        cnt += n / 2;
	        n -= 2 * (n / 2);
	    }
	    if (n > 0) cnt += n;
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}