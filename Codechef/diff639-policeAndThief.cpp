#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    int cnt = 0;
	    while (a != b) {
	        if (a > b) {
	            a -= 2;
	            b--;
	        }
	        else {
	            a += 2;
	            b++;
	        }
	        cnt++;
	    }
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}