#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while (t--) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    
	    int mx = max(a, max(b, c));
	    if (a == mx) cout << max(b, c) << '\n';
	    else if (b == mx) cout << max(a, c) << '\n';
	    else cout << max(a, b) << '\n';
	}
	
	return 0;
}