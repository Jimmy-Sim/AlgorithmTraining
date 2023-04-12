#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b;
	    cin >> a >> b;
	    
	    int cnt = 0;
	    while (a--) {
	        int n;
	        cin >> n;
	        
	        if (n >= b) cnt++;
	    }
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}