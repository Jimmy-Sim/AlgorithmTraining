#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int cnt = 0;
	    while (n--) {
	        int a;
	        cin >> a;
	        
	        if (a >= 10 && a <= 60) cnt++;
	    }
	    
	    cout << cnt << '\n';
	}
	
	return 0;
}